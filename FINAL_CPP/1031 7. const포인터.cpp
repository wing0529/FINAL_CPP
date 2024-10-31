//const �����Ϳ� const ��� �Լ�

const int* p1;		// ��
int* const p2;		// ��
const int* const p3;	// ��
//p1�� ������� �ʴ� ������ ����Ű�� �������̴�.�� �����͸� ���Ͽ� �����Ǵ� ���� ������ �Ұ����ϴ�.
//p2�� ������ ���� ��� �������̴�.������ ����� �� ������ p2�� �ٸ� ���� ����ų �� ����.
//p3�� ����� ���� ��� �������̴�.�����Ͱ� ����Ű�� ���� ������ �Ұ����ϰ� ������ p3�� �ٸ� ���� ����Ű�Բ� ����� �� ����.


int a = 0;
const int* p = &a;
// ����
int* const p = &a;
//p = &b;// ������ ����
//int *p=&a; //������ ����

// ��� �Լ��� const�� �����ϸ� �Լ� �ȿ��� ��� ������ �����ϴ� ���� �����ȴ�. 
// const ��ü�� ����Ű�� �����͸� �����ϸ� �� �����ͷ� ȣ���� �� �ִ� �Լ��� const �Լ����̴�.

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
