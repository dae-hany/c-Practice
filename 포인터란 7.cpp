#include <iostream>
using namespace std;

int main() {
    int i = 10;
    int* ptr = &i;
    int** qtr = &ptr; // �����Ϳ� ���� ������ 

    cout << &ptr << endl; // ptr�� �ּ� ��� 
    cout << qtr << endl; // ptr�� �ּ� ��� 

    cout << &i << endl;   // i�� �ּ� 
    cout << *qtr << endl; // ptr�� �ּҿ� �ִ� ��(i�� �ּ�)

    cout << **qtr << endl; // ptr�� �ּҿ� �ִ� ��(i�� �ּ�)�� �ִ� ��(10)

    return 0;
}