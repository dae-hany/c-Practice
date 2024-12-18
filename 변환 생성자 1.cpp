#include <iostream>
using namespace std;

template <typename T> class smartptr {
private:
    T* ptr; // 원시 포인터 저장 
public:
    smartptr(T* p = 0) : ptr(p) {} // 초기화: 포인터를 할당

    // 변환 생성자 -> long 자료형의 주소를 (int *)로 타입 캐스팅 해줌 
    smartptr(long* p = 0) : ptr( (int*)p ) {} 

    T& operator*() {return *ptr;}
    T* operator->() {return ptr;}
};

int main() {
    smartptr<int> p1(new int); // int 형의 주소를 가리키는 스마트 포인터 
    *p1 = 10; // 당연히 정수는 가리킬 수 있음

    long i = 1234;

    p1 = &i; // 변환 생성자를 지정해주었으므로, long 자료형을 가리킬 수 있음
    cout << *p1 << endl;
}