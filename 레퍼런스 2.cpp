#include <iostream>;
using namespace std;

int main() {
    int a = 100;
    int& b = a;         // a�� b�� �ּҴ� �����ϴ�.
    int c = 200;

    b = c;              // b�ּҿ� 200�� �Ҵ� 

    cout << b << endl; // 200 ���
    cout << a << endl; // 200 ���
}