#include <iostream>;
using namespace std;

struct pos {
    int a[4];
};

void func(pos a) {
    for (int i = 0; i < sizeof(a) / sizeof(int); i++)
        cout << a.a[i] << endl;
}

void gunc(int a[4]) {
    for (int i = 0; i < sizeof(a) / sizeof(int); i++)
        cout << a[i] << endl;
}

int main() {
    pos x = { 1,2,3,4 };
    int a[4] = { 1,2,3,4 };

    cout << "����ü�� �Լ��� ������ �� ���" << endl;
    func(x);
    cout << "�迭�� �Լ��� ������ �� ���" << endl;
    gunc(a);

    return 0;
}