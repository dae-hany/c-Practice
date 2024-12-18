#include <iostream> 
using namespace std;

// C 스타일 타입 캐스팅
int main() {
    double pi = 3.14;
    int n = pi; // 묵시적 형변환
    int m = (int)pi; // 명시적 형변환 

    cout << n << endl; // 3 출력
    cout << m << endl; // 3 출력 

    // ptr은 int 자료형을 가리키는 포인터 
    // double 자료형 pi의 주소를 (int *) 로 캐스팅하므로 4 bytes 만큼의 손실 발생
    int* ptr = (int*)&pi;
    cout << *ptr << endl; // 1374389535 출력?!
}