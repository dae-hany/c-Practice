#include <iostream>;
using namespace std;

int main() {
    int a = 1;
    int* ptr = &a;

    cout << a << endl; // 1 출력
    cout << ptr << endl; // a의 주소 출력
    cout << *ptr << endl; // (역참조) a의 주소가 갖는 값, 즉 1 출력 
    cout << &ptr << endl; // ptr의 주소 출력 
}