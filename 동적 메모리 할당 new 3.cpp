#include <iostream>;
using namespace std;

int* func() {
    int* num = new int[4]; // ���� �޸𸮸� �Ҵ��ߴٸ�
    delete num;            // ���� delete�� �� �޸� ������ �������־�� �մϴ�. 
    num = new int[8];

    num[0] = 1;
    num[1] = 2;
    num[2] = 4;
    num[3] = 4;

    return num;
}

int main() {
    int* ptr;
    ptr = func();

    cout << hex;
    cout << "&ptr : " << &ptr << endl;              // ptr ��ü �ּ� 
    cout << "ptr : " << ptr << endl;                // ptr�� ����Ű�� �ּ� -> �� ���� �޸� 
    cout << "*ptr : " << *ptr << endl;              // 1 ��� 
    cout << "*(ptr + 1) : " << *(ptr + 1) << endl;  // 2 ��� 
}