#include <iostream>
using namespace std;
class Test {
	
};

int g_var = 0;//global ���� -> �޸� Data�� ����
void foo(int x) {
	int a;
	g_var = 2;
}

int main() {
	//������ ���� = c�� c++���� �ִ� ���
	//��� �����ʹ� 64bit = 8Byte�� ũ�⸦ ���� ��
	//�ּ� ��
	int* p1;
	double* p2;
	char* p3;
	short* p4;

	//�ּ� ������ &
	int number = 10;//local -> �޸� Stack�� ����
	
	int * p9 = &number;//���� number�� �ּҸ� �����Ϳ� ����

	int* p7 = NULL;
	Test* q = nullptr;
	

	// ���� �Ҵ� �޸�
	int* a = (int*)malloc(sizeof(int));//���� -> �޸� Heap�� ����
	int* b = new int;// int�� constructor�� ���� 
	delete b; // new�� ������ delete�� �׻� �־�� ��
	
	// ���� �Ҵ� �޸� �迭 
	//c style
	int* c = (int*)malloc(sizeof(int) * 10);
	free(c);
	
	//cpp style
	int* d = new int[10];//10�� ����
	delete[] d;//array�� �������� !!!


	//Test *p = new Test[10];
	int n; cin >> n;
	int* p = new int[10];
	int p[10];
	//���� �� p[0], p[1]..
	// p[0] == *p
	// p[1] == *(p+1)
	cout << "processing " << endl;
	delete[]p;


	return 0;
}