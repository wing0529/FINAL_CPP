//const 포인터와 const 멤버 함수

const int* p1;		// ①
int* const p2;		// ②
const int* const p3;	// ③
//p1은 변경되지 않는 정수를 가리키는 포인터이다.이 포인터를 통하여 참조되는 값은 변경이 불가능하다.
//p2는 정수에 대한 상수 포인터이다.정수는 변경될 수 있지만 p2는 다른 것을 가리킬 수 없다.
//p3는 상수에 대한 상수 포인터이다.포인터가 가리키는 값도 변경이 불가능하고 포인터 p3도 다른 것을 가리키게끔 변경될 수 없다.


int a = 0;
const int* p = &a;
// 가능
int* const p = &a;
//p = &b;// 컴파일 에러
//int *p=&a; //컴파일 에러

// 멤버 함수를 const로 정의하면 함수 안에서 멤버 변수를 변경하는 것이 금지된다. 
// const 객체를 가리키는 포인터를 정의하면 이 포인터로 호출할 수 있는 함수는 const 함수뿐이다.

#include <iostream>
using namespace std;

class Circle
{
private:
	int radius;

public:
	Circle() :radius(10) { }
	~Circle() { }
	void setRadius(int radius) { this->radius = radius; }
	int getRadius() const { return radius; }
};
int main()
{
	Circle* p = new Circle();
	const Circle* pConstObj = new Circle();
	Circle* const pConstPtr = new Circle();

	cout << "pRect->radius: " << p->getRadius() << endl;
	cout << "pConstObj->radius: " << pConstObj->getRadius() << endl;
	cout << "pConstPtr->radius: " << pConstPtr->getRadius() << endl << endl;

	p->setRadius(30);
	// pConstObj->setRadius(30);
	pConstPtr->setRadius(30);

	cout << "pRect->radius: " << p->getRadius() << endl;
	cout << "pConstObj->radius: " << pConstObj->getRadius() << endl;
	cout << "pConstPtr->radius: " << pConstPtr->getRadius() << endl;
	return 0;
}
