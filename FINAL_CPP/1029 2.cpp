#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	int* ptr;
	srand(time(NULL));	// ���� �߻��� �õ� ����
	ptr = new int[10]; 	// �� ���� �޸� �Ҵ�

	for (int i = 0; i < 10; i++)
		ptr[i] = rand();	// �� ���� �޸� ���

	for (int i = 0; i < 10; i++)
		cout << ptr[i] << " ";

	delete[] ptr; 		// �� ���� �޸� �ݳ�
	cout << endl;
	return 0;
}
