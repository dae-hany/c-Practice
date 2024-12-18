#include <iostream>
#include <memory>
using namespace std;

int main() {
    unique_ptr<int> p1(new int);
    *p1 = 10;

    // unique_ptr<int> p2(p1); // p1�� �ܵ� ������! p2�� p1�� �޸𸮸� ����ų �� ����
    unique_ptr<int> p2 = std::move(p1); // p1���� p2�� ������ �̵�
    cout << *p2 << endl; // 10 ��� 

    cout << *p1 << endl; // ���� ! ���� p1�� ����Ű�°� ��� ��� �� ��!
}