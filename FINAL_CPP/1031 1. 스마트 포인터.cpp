#include <iostream>
using namespace std;
int main() {
	//����Ʈ ������
	// auto_ptr
	// unique_ptr �Լ� ������ ���
	// shared_ptr �Լ� ����, ī��
	// Heap 

		shared_ptr<int> p1 = make_shared<int>(5); // better
		cout << p1.use_count() << endl;

		shared_ptr<int> p2 = p1; // OK! (reference count)
		cout << p2.use_count() << endl;

		return 0;
	
		// when reference count becomes zero, the memory is freed.

	// weak_ptr
	
		// ���������� �𸣰ڴ���
		// struct : default�� public
		// class : default�� private





}