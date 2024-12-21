#include <iostream>
using namespace std;

int main() {
    int i = 10;
    int* ptr = &i;

    *ptr = 100;
    ptr = (int*)100; // ptr이 가리키는 주소를 100으로 설정한 것. 

    cout << ptr << endl; // 0064 출력 (100의 16진수)
    cout << &ptr << endl; // ptr의 주소 출력 
    cout << *ptr << endl; // 의미없는 위치(주소 100)를 참조하기 때문에 아무것도 출력되지 않음 
}