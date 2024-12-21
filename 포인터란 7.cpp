#include <iostream>
using namespace std;

int main() {
    int i = 10;
    int* ptr = &i;
    int** qtr = &ptr; // 포인터에 대한 포인터 

    cout << &ptr << endl; // ptr의 주소 출력 
    cout << qtr << endl; // ptr의 주소 출력 

    cout << &i << endl;   // i의 주소 
    cout << *qtr << endl; // ptr의 주소에 있는 값(i의 주소)

    cout << **qtr << endl; // ptr의 주소에 있는 값(i의 주소)에 있는 값(10)

    return 0;
}