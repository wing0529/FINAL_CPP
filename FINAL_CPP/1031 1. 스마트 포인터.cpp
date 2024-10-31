#include <iostream>
using namespace std;
int main() {
	//스마트 포인터
	// auto_ptr
	// unique_ptr 함수 내에서 사용
	// shared_ptr 함수 전달, 카피
	// Heap 

		shared_ptr<int> p1 = make_shared<int>(5); // better
		cout << p1.use_count() << endl;

		shared_ptr<int> p2 = p1; // OK! (reference count)
		cout << p2.use_count() << endl;

		return 0;
	
		// when reference count becomes zero, the memory is freed.

	// weak_ptr
	
		// 무슨말인지 모르겠더염
		// struct : default로 public
		// class : default로 private





}