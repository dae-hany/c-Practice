#include <iostream>;
using namespace std;

int main() {
    int a = 1;
    int* ptr = &a;

    cout << a << endl; // 1 ���
    cout << ptr << endl; // a�� �ּ� ���
    cout << *ptr << endl; // (������) a�� �ּҰ� ���� ��, �� 1 ��� 
    cout << &ptr << endl; // ptr�� �ּ� ��� 
}