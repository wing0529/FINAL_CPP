#include <iostream>
using namespace std;
class Test {
	
};

int g_var = 0;//global 변수 -> 메모리 Data에 저장
void foo(int x) {
	int a;
	g_var = 2;
}

int main() {
	//포인터 선언 = c와 c++에만 있는 기능
	//모든 포인터는 64bit = 8Byte의 크기를 차지 함
	//주소 값
	int* p1;
	double* p2;
	char* p3;
	short* p4;

	//주소 연산자 &
	int number = 10;//local -> 메모리 Stack에 저장
	
	int * p9 = &number;//변수 number의 주소를 포인터에 저장

	int* p7 = NULL;
	Test* q = nullptr;
	

	// 동적 할당 메모리
	int* a = (int*)malloc(sizeof(int));//동적 -> 메모리 Heap에 저장
	int* b = new int;// int에 constructor를 포함 
	delete b; // new가 있으면 delete가 항상 있어야 함
	
	// 동적 할당 메모리 배열 
	//c style
	int* c = (int*)malloc(sizeof(int) * 10);
	free(c);
	
	//cpp style
	int* d = new int[10];//10개 생성
	delete[] d;//array로 지워야함 !!!


	//Test *p = new Test[10];
	int n; cin >> n;
	int* p = new int[10];
	int p[10];
	//접근 법 p[0], p[1]..
	// p[0] == *p
	// p[1] == *(p+1)
	cout << "processing " << endl;
	delete[]p;


	return 0;
}