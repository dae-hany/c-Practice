#include <iostream>;
using namespace std;

int main() {
    int a = 0x11223344;

    int num[] = { 10, 20, 30, 40 };
    int* ptr = num;

    cout << *(num + 1) << endl;     // 20 ���
    cout << num[1] << endl;         // 20 ��� 

    // �����Ϳ� a�� �ּ� ���� (�����ʹ� �����̹Ƿ� ����Ű�� �ּҰ� ���� �����ϴ�)
    ptr = &a;
    cout << hex;
    cout << *ptr << endl;           // 11223344 ��� 

    // num = &a;  <-- �迭�� �̸��� �ּҶ�鼭.. �̰Ŵ� �� ������ ������ �߻�����?
                                 // <-- �迭�� �̸��� constant �ּ�!!
}