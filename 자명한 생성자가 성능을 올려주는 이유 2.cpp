#include <iostream> 
using namespace std;

// 얕은 복사가 발생하는 경우
class A {
    char* ptr; // 동적 메모리를 가리키는 포인터 
public:
    A() {};
    // 복사 생성자가 정의되어 있지 않음 -> 얕은 복사 발생 

    A(const char* str, int size) {
        ptr = new char[size];
        memcpy(ptr, str, size);
    }
    ~A() { delete ptr; } // 동적 메모리 해제 
};

template<typename T> void mycpy(T* dst, T* src, int sz) {
    memcpy(dst, src, sizeof(T) * sz); // 단순 메모리 복사 
}

int main() {
    A a("hello", 6);
    A b;
    mycpy(&b, &a, sizeof(A));
    // main 함수가 종료되면서 a와 b 모두 소멸 
    // a와 b는 동일한 메모리 참조
    // 동일한 메모리를 두 번 delete 하는 문제 발생 
}