#include <iostream>
using namespace std;

int main() {
    int i = 10;
    int* ptr = &i;

    cout << "�����ͷ� ���� �����ϱ� �� : " << i << endl;

    *ptr = 100; // �����͸� ���� ������ ���� ������ �� �ִ� 

    cout << "�����ͷ� ���� ������ �� : " << i << endl;
}