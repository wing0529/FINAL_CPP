// ��ȯ ���� �� weak pointer ���
// �幮 ����

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
����Ʈ ������ ����
�⺻���� ����Ʈ ������ : shared ptr
���������� ��� �� : unique ptr
��ȯ ������ �߻� : weak ptr 

*/