/* 

객체 생성 
1. 동적 (Heap) 
	new()
2. 정적 (Stack)
	
객체 생성 규칙

1. 항상 stack에 만드는게 베스트 
:  stack이 크기가 작아서 heap보다 빠름, 캐시 메모리
   자동으로 지워줌
   heap은 크기가 큰 대신 느림

2. 만들어야하는 객체의 개수를 모를 때, 런타임때 결정 = Heap or vector (벡터가 더 조음)

3. 12byte * 100개의 객체 생성 -> program이 동작하지 않음 
   = stack크기 초과 > Heap 사용 : 동적 생성
*/

#include <iostream>
using namespace std;

class Dog {
private:
	string name;
	int age;

public:
	Dog() {
		cout << "생성자 호출\n";
		age = 1;
		name = "바둑이";
	}
	~Dog() {
		cout << "소멸자 호출\n";
	}


};

int main()
{
	Dog* pDog = new Dog;// 동적 new 사용
	delete pDog;

	return 0;
}

