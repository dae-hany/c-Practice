#include <iostream> 
using namespace std;

// ���� ���簡 �߻��ϴ� ���
class A {
    char* ptr; // ���� �޸𸮸� ����Ű�� ������ 
public:
    A() {};
    // ���� �����ڰ� ���ǵǾ� ���� ���� -> ���� ���� �߻� 

    A(const char* str, int size) {
        ptr = new char[size];
        memcpy(ptr, str, size);
    }
    ~A() { delete ptr; } // ���� �޸� ���� 
};

template<typename T> void mycpy(T* dst, T* src, int sz) {
    memcpy(dst, src, sizeof(T) * sz); // �ܼ� �޸� ���� 
}

int main() {
    A a("hello", 6);
    A b;
    mycpy(&b, &a, sizeof(A));
    // main �Լ��� ����Ǹ鼭 a�� b ��� �Ҹ� 
    // a�� b�� ������ �޸� ����
    // ������ �޸𸮸� �� �� delete �ϴ� ���� �߻� 
}