#include <iostream>;
using namespace std;

struct myarray {
    int x[32];
};

// ����ü�� ��ȯ�ϴ� �Լ�, �迭�� �ٸ��� ������ ��ȯ�ȴ�
myarray func() {
    myarray arr = { 1,2,3,4 };
    return arr;
}

int main() {
    myarray ret = func();

    // ��� : 1 2 3 4
    cout << ret.x[0] << "\n" << ret.x[1] << endl;
    cout << ret.x[2] << "\n" << ret.x[3] << endl;
    return 0;
}