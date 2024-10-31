// 순환 참조 시 weak pointer 사용
// 드문 일임

#include <memory>
using namespace std;

struct B;
struct A { shared_ptr<B> pB; };
struct B { weak_ptr<A> pA; };

int main()
{
	shared_ptr<A> pA(new A());
	shared_ptr<B> pB(new B());

	pA->pB = pB;
	pB->pA = pA; // OK!

	return 0;
} // if pA is destroyed, weak_ptr = nullptr

/*
스마트 포인터 정리
기본적인 스마트 포인터 : shared ptr
독립적으로 사용 시 : unique ptr
순환 참조가 발생 : weak ptr 

*/