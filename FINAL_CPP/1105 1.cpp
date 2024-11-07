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
	static int s; // 정적 변수
};

int main() {
	/*함수로 객체 전달하기
	call by value -> c, c++(= reference 값을 copy하는거라서 결국 call by value임)
	call by reference -> java

	object -> function -> object

	*/
	A a{ 1,2,3 };
	A b = a;

	// RVO ( Return value optimization)
	
	// 복사 생성자
	//static member
	A::s = 0;
	A::func(2);


	


	return 0;

}