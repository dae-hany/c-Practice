#include <iostream> 
using namespace std;

int main() {
    double pi = 3.14;

    int* ptr = reinterpret_cast<int*>(&pi); // 8 ����Ʈ¥�� �ּҸ� 4 ����Ʈ�� �д� ���� ���
    cout << *ptr << endl; // ������ �� ��� 

    ptr = reinterpret_cast<int*>(0xAABBCCDD); // �ƹ� �ּҸ� ����Ű�� ���ֱ� ������
    cout << *ptr << endl; // ����� �ƹ��͵� ��� �� �� 
}