#include <iostream>
#include <vector>
#include <memory>

using namespace std;
struct A {
public:
	A(int x, int y, int z) : x(x),y(y),z(z){}
	int x;
	int y;
	int z;
	static void func(int a) { s = a; }
	static int s; // ���� ����
};

int main() {
	/*�Լ��� ��ü �����ϱ�
	call by value -> c, c++(= reference ���� copy�ϴ°Ŷ� �ᱹ call by value��)
	call by reference -> java

	object -> function -> object

	*/
	A a{ 1,2,3 };
	A b = a;

	// RVO ( Return value optimization)
	
	// ���� ������
	//static member
	A::s = 0;
	A::func(2);


	


	return 0;

}