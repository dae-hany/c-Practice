#include <iostream>
#include <memory>
using namespace std;

int main() {
    unique_ptr<int> p1(new int);
    *p1 = 10;

    // unique_ptr<int> p2(p1); // p1의 단독 소유권! p2가 p1의 메모리를 가리킬 수 없음
    unique_ptr<int> p2 = std::move(p1); // p1에서 p2로 소유권 이동
    cout << *p2 << endl; // 10 출력 

    cout << *p1 << endl; // 에러 ! 이제 p1은 가리키는게 없어서 출력 안 됨!
}