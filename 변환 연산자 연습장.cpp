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
	BBB(AAA& a) : i(a.x), j(a.y), k(a.x + a.y) {} 
	operator int() const { return i * j * k; }
};

int main() {
	AAA a;
	BBB b = a;

	cout << b.i * b.j * b.k << endl;

	int c = b;

	cout << c << endl;
}