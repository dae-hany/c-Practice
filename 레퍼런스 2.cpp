#include <iostream>;
using namespace std;

int main() {
    int a = 100;
    int& b = a;         // a와 b의 주소는 같습니다.
    int c = 200;

    b = c;              // b주소에 200을 할당 

    cout << b << endl; // 200 출력
    cout << a << endl; // 200 출력
}