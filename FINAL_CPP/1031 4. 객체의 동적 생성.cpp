/* 

��ü ���� 
1. ���� (Heap) 
	new()
2. ���� (Stack)
	
��ü ���� ��Ģ

1. �׻� stack�� ����°� ����Ʈ 
:  stack�� ũ�Ⱑ �۾Ƽ� heap���� ����, ĳ�� �޸�
   �ڵ����� ������
   heap�� ũ�Ⱑ ū ��� ����

2. �������ϴ� ��ü�� ������ �� ��, ��Ÿ�Ӷ� ���� = Heap or vector (���Ͱ� �� ����)

3. 12byte * 100���� ��ü ���� -> program�� �������� ���� 
   = stackũ�� �ʰ� > Heap ��� : ���� ����
*/

#include <iostream>
using namespace std;

class Dog {
private:
	string name;
	int age;

public:
	Dog() {
		cout << "������ ȣ��\n";
		age = 1;
		name = "�ٵ���";
	}
	~Dog() {
		cout << "�Ҹ��� ȣ��\n";
	}


};

int main()
{
	Dog* pDog = new Dog;// ���� new ���
	delete pDog;

	return 0;
}

