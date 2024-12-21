#include <iostream>;
using namespace std;

// 포인터(배열)을 반환하는 함수 
int* func() {
    int num[] = { 1,2,3,4 };
    return num;
}

// 이 함수가 종료되면, 콜 스택 프레임에 존재하는 배열 num은 사라지게 된다.

int main() {
    int* ptr = func();
    // 이 ptr은 사라진 배열 num을 가리키게 된다.
    // 유효하지 않은 메모리를 가리키는 포인터 ================> "댕글링 포인터" ====> 컴파일 에러 
}