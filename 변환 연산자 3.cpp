#include <iostream> 
using namespace std;

class AAA {
public:
    int x, y;
    AAA() : x(10), y(20) {}
};

class BBB {
public:
    int i, j, k;
    BBB() {}

    // 변환 생성자 : 클래스 -> 클래스 
    BBB(AAA& a) : i(a.x), j(a.y), k(a.x + a.y) {}

    // 변환 연산자 : 클래스 -> 기본 타입(int)
    operator int() const {return i * j * k;}
};

int main() {
    AAA a;
    BBB b = a; // 변환 생성자에 의해 가능 

    cout << b.i << " " << b.j << " " << b.k << endl; // 10 20 30 출력 

    int c = b; // 변환 연산자에 의해 가능 
    cout << c << endl; // 10 * 20 * 30 = 6000 출력 
}