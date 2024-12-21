#include <iostream>;
using namespace std;

struct pos {
    int a[4];
};

// 구조체가 함수의 인자로 전달될 때는, 구조체 자체가 전달됩니다.
void func(pos a) {
    a.a[0] = 100; // 따라서 원본 구조체의 값은 변경되지 않습니다.
}

// 배열이 함수의 인자로 전달될 때는, 주소가 전달됩니다.
void gunc(int a[4]) {
    a[0] = 100; // 따라서 원본 배열의 값은 변경됩니다. 
}

int main() {
    pos x = { 1,2,3,4 };
    int a[4] = { 1,2,3,4 };

    cout << "함수 호출 이전" << endl;
    cout << "x.a[0] = " << x.a[0] << endl;
    cout << "a[0] = " << a[0] << endl;

    func(x);
    gunc(a);

    cout << endl;
    cout << "함수 호출 이후" << endl;
    cout << "x.a[0] = " << x.a[0] << endl;
    cout << "a[0] = " << a[0] << endl;

    return 0;
}