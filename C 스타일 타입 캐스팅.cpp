#include <iostream> 
using namespace std;

// C ��Ÿ�� Ÿ�� ĳ����
int main() {
    double pi = 3.14;
    int n = pi; // ������ ����ȯ
    int m = (int)pi; // ����� ����ȯ 

    cout << n << endl; // 3 ���
    cout << m << endl; // 3 ��� 

    // ptr�� int �ڷ����� ����Ű�� ������ 
    // double �ڷ��� pi�� �ּҸ� (int *) �� ĳ�����ϹǷ� 4 bytes ��ŭ�� �ս� �߻�
    int* ptr = (int*)&pi;
    cout << *ptr << endl; // 1374389535 ���?!
}