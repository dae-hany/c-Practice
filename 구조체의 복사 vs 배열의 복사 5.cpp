#include <iostream>;
using namespace std;

struct pos {
    int a[4];
};

// ����ü�� �Լ��� ���ڷ� ���޵� ����, ����ü ��ü�� ���޵˴ϴ�.
void func(pos a) {
    a.a[0] = 100; // ���� ���� ����ü�� ���� ������� �ʽ��ϴ�.
}

// �迭�� �Լ��� ���ڷ� ���޵� ����, �ּҰ� ���޵˴ϴ�.
void gunc(int a[4]) {
    a[0] = 100; // ���� ���� �迭�� ���� ����˴ϴ�. 
}

int main() {
    pos x = { 1,2,3,4 };
    int a[4] = { 1,2,3,4 };

    cout << "�Լ� ȣ�� ����" << endl;
    cout << "x.a[0] = " << x.a[0] << endl;
    cout << "a[0] = " << a[0] << endl;

    func(x);
    gunc(a);

    cout << endl;
    cout << "�Լ� ȣ�� ����" << endl;
    cout << "x.a[0] = " << x.a[0] << endl;
    cout << "a[0] = " << a[0] << endl;

    return 0;
}