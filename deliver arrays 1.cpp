#include <iostream>;
using namespace std;

void func(int* num) {
    cout << num << endl;   // �迭�� ù ��° ������ �ּ� ��� 
    cout << *num << endl;  // �迭�� ù ��° ���� ��� 
}

int main() {
    int num[] = { 10, 20, 30, 40 };
    func(num);
}