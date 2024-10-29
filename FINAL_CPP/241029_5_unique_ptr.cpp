#include<iostream>
#include<memory>
#include <vector>
using namespace std;

/*
class unique_ptr{
public:
	unique_ptr(int*p)
		:p(_p){}
	~unique_ptr() {
		delete p;
	}
private:
	unique_ptr operator = (unique_ptr& other) {
		p = other.p;
	}
};
*/
int main()
{
	// raw pointer = 매우 위험
	int * p = new int; 
	delete p;
	
	//unique pointer
	unique_ptr<int> p=make_unique<int>();//unique_ptr<int> p(new int);
	*p = 10;
	cout << *p << endl;
	cout << "processing" << endl;

	return 0;

}
