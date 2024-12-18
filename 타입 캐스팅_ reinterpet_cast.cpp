#include <iostream> 
using namespace std;

int main() {
    double pi = 3.14;

    int* ptr = reinterpret_cast<int*>(&pi); // 8 바이트짜리 주소를 4 바이트로 읽는 것을 허용
    cout << *ptr << endl; // 쓰레기 값 출력 

    ptr = reinterpret_cast<int*>(0xAABBCCDD); // 아무 주소를 가리키게 해주기 때문에
    cout << *ptr << endl; // 여기는 아무것도 출력 안 됨 
}