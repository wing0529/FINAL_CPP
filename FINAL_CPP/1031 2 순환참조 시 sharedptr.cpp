
// shared pointer + 순환참조 -> x
#include <memory>
#include <iostream>
using namespace std;

struct B;
struct A { shared_ptr<B> m_pB; };
struct B { shared_ptr<A> m_pA; };

int main()
{
	shared_ptr<A> pA(new A());
	//pointer + reference counter
	shared_ptr<B> pB(new B());

	pA->m_pB = pB;
	pB->m_pA = pA; // circular dependency (순환참조)

	return 0;
} // 순환 참조 -> 메모리 영역이 지워지지 않음 -> shared pointer를 사용하면 x
// 순환 참조 : weak_ptr를 사용
// reference count never becomes zero. memory leak!
