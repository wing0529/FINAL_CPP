#include<iostream>
using namespace std;



int main()
{
	//delete 할 필요 x -> 자동으로 지워줌(destructor)
	auto_ptr<int> p(new int);
	*p = 10;
	cout << *p << endl;
	
	return 0;
}

// 문제 발생
int main()
{
	auto_ptr<int> p1(new int);
	*p1 = 10;

	auto_ptr<int> p2 = p1; // copied (ownership is moved)

	cout << *p2 << endl; // this works fine
	cout << *p1 << endl; // undefined behavior

	return 0;
	//p1을 지울 때 , p2를 지울 때 -> delete 2번 -> segmentation fault
	//망함
}