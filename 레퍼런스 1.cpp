// ���۷�����? ���� ������ ����Ű�� ������ 

#include <iostream>;
using namespace std;

int main() {
    int a = 100;
    int& b = a; // b�� ���� ���� a�� ����Ŵ. 

    // a�� b�� ���� �ּ� (���۷����� �̷л� 0byte)
    cout << &a << endl; 
    cout << &b << endl;

    // ���� ������ ��
    cout << a << endl;
    cout << b << endl;

    // ���� ������ ũ�� 
    cout << sizeof(a) << endl; 
    cout << sizeof(b) << endl;
}