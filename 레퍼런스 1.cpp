// 레퍼런스란? 원본 변수를 가리키는 참조자 

#include <iostream>;
using namespace std;

int main() {
    int a = 100;
    int& b = a; // b는 원본 변수 a를 가리킴. 

    // a와 b는 동일 주소 (레퍼런스는 이론상 0byte)
    cout << &a << endl; 
    cout << &b << endl;

    // 따라서 동일한 값
    cout << a << endl;
    cout << b << endl;

    // 따라서 동일한 크기 
    cout << sizeof(a) << endl; 
    cout << sizeof(b) << endl;
}