#include<iostream>
using namespace std;
// main 함수 안이라서 unique_ptr로 접근 한 후 delete를 없애는게 베스트
int main()
{
	Dog* pDog = new Dog;
	cout << "강아지의 나이: " << pDog->getAge() << endl;

	pDog->setAge(5);
	cout << "강아지의 나이: " << pDog->getAge() << endl;

	delete pDog;
	return 0;
}

// 이렇게 해도 되는데, 이거 대신에 : pAge(_), pw()로 넣는게 더 좋음
class Dog {
private:// unique_ptr로 만드는게 더 좋은 습관 ! -> delete 필요 x
	int* pWeight;
	int* pAge;

public:
	Dog() {//동적 생성
		pAge = new int(1);
		pWeight = new int(10);
	}
	~Dog() {//지워야하는 의무 생김
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
	cout << "강아지의 나이: " << pDog->getAge() << endl;

	pDog->setAge(5);
	cout << "강아지의 나이: " << pDog->getAge() << endl;

	delete pDog;
	return 0;
}
