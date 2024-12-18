#include <iostream>
using namespace std;

template <typename T> class smartptr {
private:
    T* ptr; // ���� ������ ���� 
public:
    smartptr(T* p = 0) : ptr(p) {} // �ʱ�ȭ: �����͸� �Ҵ�

    // ��ȯ ������ -> long �ڷ����� �ּҸ� (int *)�� Ÿ�� ĳ���� ���� 
    smartptr(long* p = 0) : ptr( (int*)p ) {} 

    T& operator*() {return *ptr;}
    T* operator->() {return ptr;}
};

int main() {
    smartptr<int> p1(new int); // int ���� �ּҸ� ����Ű�� ����Ʈ ������ 
    *p1 = 10; // �翬�� ������ ����ų �� ����

    long i = 1234;

    p1 = &i; // ��ȯ �����ڸ� �������־����Ƿ�, long �ڷ����� ����ų �� ����
    cout << *p1 << endl;
}