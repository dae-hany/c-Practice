#include <iostream>;
using namespace std;

int main() {
    short* a;
    int* b;
    long long* c;

    // 주소의 크기는 늘 일정하므로
    // 이를 저장하는 포인터 변수의 크기도 일정 : 8 bytes 
    cout << sizeof(a) << endl;
    cout << sizeof(b) << endl;
    cout << sizeof(c) << endl;
}