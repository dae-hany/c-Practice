/* �����ڰ� �ϴ� �� */
// 1. �θ� Ŭ������ ������ ȣ�� 
// 2. ��� ��ü�� ������ ȣ�� 
// 3. vtable �ʱ�ȭ 

// �ڸ��� ������(trivial ������)
// 1. �θ� Ŭ������ ���� �� 
// 2. ��ü�� ��� ������ ���� ��
// 3. ���� �Լ��� ���� ��
// 4. ������� �����ڰ� ���� ��
// ==> �ڸ��� ������ 

// �ڸ��� ������ : ������ ũ�� ��� �� 

#include <iostream> 
using namespace std;

class A {
public:
    A() { cout << "A ������" << endl << endl; }
    void foo() { cout << "A::foo" << endl; }
};

class B : public A {
    A a; 
public:
    B() { cout << "B ������" << endl; }
    virtual void goo() { cout << "B::goo" << endl; }
};

int main() {
    B* p = static_cast<B*>(malloc(sizeof(B)));
    new(p) B; 
    p->goo(); 

    // 1. placement new => B�� �θ� Ŭ���� A�� ������ ȣ�� 
    // 2. B�� Ŭ���� ��� ���� A a; ȣ�� 
    // 3. B ������ 
    // 4. B::goo
}