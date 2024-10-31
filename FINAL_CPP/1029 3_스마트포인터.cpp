#include<iostream>
using namespace std;



int main() 
{
	// 스마트 포인터
	// 스스로 메모리를 관리하는 포인터
	// 더 이상 객체가 필요하지 않을 때 자동으로 해당 객체를 삭제하여 메모리 누수를 방지
	// RAII(Resource Acquisition Is Initialization)
	// (Resource Life Cycle = Object Life Cycle)
	// (Memory Life Cycle = Smart Pointer Life Cycle)
	// 스마트 포인터의 종류
	// shared_ptr(C++11)
	// unique_ptr(C++11)
	// weak_ptr(C++11)
	// auto_ptr(C++03, deprecated in C++11, removed in C++17)

	unique_ptr<int> p(new int);

	*p = 99;		// p를 사용한다

}