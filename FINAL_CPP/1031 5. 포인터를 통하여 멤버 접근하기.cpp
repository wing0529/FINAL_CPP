#include<iostream>
using namespace std;
// main �Լ� ���̶� unique_ptr�� ���� �� �� delete�� ���ִ°� ����Ʈ
int main()
{
	Dog* pDog = new Dog;
	cout << "�������� ����: " << pDog->getAge() << endl;

	pDog->setAge(5);
	cout << "�������� ����: " << pDog->getAge() << endl;

	delete pDog;
	return 0;
}

// �̷��� �ص� �Ǵµ�, �̰� ��ſ� : pAge(_), pw()�� �ִ°� �� ����
class Dog {
private:// unique_ptr�� ����°� �� ���� ���� ! -> delete �ʿ� x
	int* pWeight;
	int* pAge;

public:
	Dog() {//���� ����
		pAge = new int(1);
		pWeight = new int(10);
	}
	~Dog() {//�������ϴ� �ǹ� ����
		delete pAge;
		delete pWeight;
	}
	int getAge() { return *pAge; }
	void setAge(int age) { *pAge = age; }
	int getWeight() { return *pWeight; }
	void setWeight(int weight) { *pWeight = weight; }
};

int main()
{
	Dog* pDog = new Dog;
	cout << "�������� ����: " << pDog->getAge() << endl;

	pDog->setAge(5);
	cout << "�������� ����: " << pDog->getAge() << endl;

	delete pDog;
	return 0;
}
