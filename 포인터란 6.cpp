#include <iostream>
using namespace std;

int main() {
    int i = 10;
    int* ptr = &i;

    *ptr = 100;
    ptr = (int*)100; // ptr�� ����Ű�� �ּҸ� 100���� ������ ��. 

    cout << ptr << endl; // 0064 ��� (100�� 16����)
    cout << &ptr << endl; // ptr�� �ּ� ��� 
    cout << *ptr << endl; // �ǹ̾��� ��ġ(�ּ� 100)�� �����ϱ� ������ �ƹ��͵� ��µ��� ���� 
}