
// shared pointer + ��ȯ���� -> x
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
	pB->m_pA = pA; // circular dependency (��ȯ����)

	return 0;
} // ��ȯ ���� -> �޸� ������ �������� ���� -> shared pointer�� ����ϸ� x
// ��ȯ ���� : weak_ptr�� ���
// reference count never becomes zero. memory leak!
