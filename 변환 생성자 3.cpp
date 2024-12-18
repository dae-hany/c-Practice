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

	// 변환 생성자 지정 
	BBB(AAA& a) : i(a.x), j(a.y), k(a.x + a.y) {} 
};

int main() {
	AAA a;

	BBB b = a; // 변환 생성자 있으므로 변환 가능 
	cout << b.i << " " << b.j << " " << b.k << endl; // 10 20 30 출력 
}