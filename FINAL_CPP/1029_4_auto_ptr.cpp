#include<iostream>
using namespace std;



int main()
{
	//delete �� �ʿ� x -> �ڵ����� ������(destructor)
	auto_ptr<int> p(new int);
	*p = 10;
	cout << *p << endl;
	
	return 0;
}

// ���� �߻�
int main()
{
	auto_ptr<int> p1(new int);
	*p1 = 10;

	auto_ptr<int> p2 = p1; // copied (ownership is moved)

	cout << *p2 << endl; // this works fine
	cout << *p1 << endl; // undefined behavior

	return 0;
	//p1�� ���� �� , p2�� ���� �� -> delete 2�� -> segmentation fault
	//����
}