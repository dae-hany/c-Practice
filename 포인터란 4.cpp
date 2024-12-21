#include <iostream>
using namespace std;

int main() {
    int i = 10;
    int* ptr = &i;

    cout << "포인터로 값을 변경하기 전 : " << i << endl;

    *ptr = 100; // 포인터를 통해 변수의 값을 변경할 수 있다 

    cout << "포인터로 값을 변경한 후 : " << i << endl;
}