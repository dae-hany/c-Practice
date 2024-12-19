/* 생성자가 하는 일 */
// 1. 부모 클래스의 생성자 호출 
// 2. 멤버 객체의 생성자 호출 
// 3. vtable 초기화 

// 자명한 생성자(trivial 생성자)
// 1. 부모 클래스가 없을 때 
// 2. 객체인 멤버 변수가 없을 때
// 3. 가상 함수가 없을 때
// 4. 명시적인 생성자가 없을 때
// ==> 자명한 생성자 

// 자명한 생성자 : 성능이 크게 향상 됨 

#include <iostream> 
using namespace std;

class A {
public:
    A() { cout << "A 생성자" << endl << endl; }
    void foo() { cout << "A::foo" << endl; }
};

class B : public A {
    A a; 
public:
    B() { cout << "B 생성자" << endl; }
    virtual void goo() { cout << "B::goo" << endl; }
};

int main() {
    B* p = static_cast<B*>(malloc(sizeof(B)));
    new(p) B; 
    p->goo(); 

    // 1. placement new => B의 부모 클래스 A의 생성자 호출 
    // 2. B의 클래스 멤버 변수 A a; 호출 
    // 3. B 생성자 
    // 4. B::goo
}