#include <iostream>;
using namespace std;

int* func() {
    int* num = new int[4];
    num[0] = 1;
    num[1] = 2;
    num[2] = 4;
    num[3] = 4;

    int mum[4] = { 1,2,3,4 };

    cout << "num : " << num << endl;        // �� ���� �޸� �ּ� 
    cout << "&num : " << &num << endl;      // ������ ��ü �ּ�(����)

    cout << "mum : " << mum << endl;        // �迭�� ù ��° ������ �ּ�(����)
    cout << "&mum : " << &mum << endl;      // �迭�� ù ��° ������ �ּ�(����)
    return num;
}

int main() {
    int* ptr;
    ptr = func();
}