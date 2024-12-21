// 포인터 : 주소를 저장하는 "변수"
// "변수"이므로 일반 변수를 선언하듯이 선언하되, 그 앞에 * 연산자를 붙인다.
// * 연산자를 역참조 연산자라고 함.
// & 연산자를 참조 연산자라고 함. 

#include <iostream>
using namespace std;

int main() {
    int num = 10;
    cout << &num << endl; // & 연산자(참조 연산자) : 변수의 주소를 참조 

    int* ptr = &num;      // num의 주소를 가리키는 ptr
    cout << *ptr << endl; // 그 주소를 역참조 
}