#include<iostream>
#include<memory>
#include <vector>
using namespace std;
void foo(shared_ptr<int> p)//copy
{
	shared_ptr<int> q = p;
	cout << "something" << endl;
}

int main()
{
	shared_ptr<int> p1 = make_shared<int>(5); // 5로 초기화
	cout << p1.use_count() << endl;

	shared_ptr<int> p2 = p1; // 카피 가능 : shared는 카피 불가
	cout << p2.use_count() << endl;

	//reference counter++;

	return 0;

}
