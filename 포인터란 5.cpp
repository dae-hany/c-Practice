#include <iostream>
using namespace std;

int main() {
    int i = 10;
    int* ptr = &i;

    ptr = 100; // 컴파일 에러 발생! 주소를 가리키는 변수에 정수를 할당한 것
    /*
    모든 변수는 자료형을 가짐.
    포인터 또한 변수임.
    ptr은 int 변수의 주소를 가리키는 변수임.
    따라서 100을 타입 캐스팅 해줘야 함.
    */
}