#include<iostream>
using namespace std;



int main() 
{
	// ����Ʈ ������
	// ������ �޸𸮸� �����ϴ� ������
	// �� �̻� ��ü�� �ʿ����� ���� �� �ڵ����� �ش� ��ü�� �����Ͽ� �޸� ������ ����
	// RAII(Resource Acquisition Is Initialization)
	// (Resource Life Cycle = Object Life Cycle)
	// (Memory Life Cycle = Smart Pointer Life Cycle)
	// ����Ʈ �������� ����
	// shared_ptr(C++11)
	// unique_ptr(C++11)
	// weak_ptr(C++11)
	// auto_ptr(C++03, deprecated in C++11, removed in C++17)

	unique_ptr<int> p(new int);

	*p = 99;		// p�� ����Ѵ�

}