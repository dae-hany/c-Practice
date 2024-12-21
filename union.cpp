#include <iostream>;
using namespace std;

// union 데이터 타입 선언 
union one4all{
    int in;
    long lo;
    double dou;
};

int main() {
    one4all uni;

    cout << sizeof(uni) << endl; // 8 bytes : 어차피 하나만 저장되니까 제일 큰 자료형의 크기만큼

    uni.in = 10; // 이때 union 데이터 타입에는 10이 저장되었다가
    uni.lo = 20; // 새롭게 20이 전달되므로 20만 저장되었다가 
    uni.dou = 30; // 결국은 10과 20 모두 저장하지 않고 30만 저장함

    cout << uni.in << endl; // 0 출력
    cout << uni.lo << endl; // 0 출력 
    cout << uni.dou << endl; // 30 출력 

    return 0;
}