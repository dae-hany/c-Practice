#include <iostream>;
using namespace std;

int main() {
    short* a;
    int* b;
    long long* c;

    // �ּ��� ũ��� �� �����ϹǷ�
    // �̸� �����ϴ� ������ ������ ũ�⵵ ���� : 8 bytes 
    cout << sizeof(a) << endl;
    cout << sizeof(b) << endl;
    cout << sizeof(c) << endl;
}