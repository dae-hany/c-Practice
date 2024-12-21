#include <iostream>;
using namespace std;

int main() {
    int a = 0x11223344;

    int num[] = { 10, 20, 30, 40 };
    int* ptr = num;

    cout << *(num + 1) << endl;     // 20 출력
    cout << num[1] << endl;         // 20 출력 

    // 포인터에 a의 주소 전달 (포인터는 변수이므로 가리키는 주소가 변경 가능하다)
    ptr = &a;
    cout << hex;
    cout << *ptr << endl;           // 11223344 출력 

    // num = &a;  <-- 배열의 이름은 주소라면서.. 이거는 왜 컴파일 에러가 발생하죠?
                                 // <-- 배열의 이름은 constant 주소!!
}