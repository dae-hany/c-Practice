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

    // ��ȯ ������ : Ŭ���� -> Ŭ���� 
    BBB(AAA& a) : i(a.x), j(a.y), k(a.x + a.y) {}

    // ��ȯ ������ : Ŭ���� -> �⺻ Ÿ��(int)
    operator int() const {return i * j * k;}
};

int main() {
    AAA a;
    BBB b = a; // ��ȯ �����ڿ� ���� ���� 

    cout << b.i << " " << b.j << " " << b.k << endl; // 10 20 30 ��� 

    int c = b; // ��ȯ �����ڿ� ���� ���� 
    cout << c << endl; // 10 * 20 * 30 = 6000 ��� 
}