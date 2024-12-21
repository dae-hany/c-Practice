#include <iostream>
using namespace std;

template <typename T> class my_calc {
private:
	T x, y;
public:
	my_calc(T x, T y) : x(x), y(y) {} 

	T add() { return x + y; }
	T sub() { return x - y; }
	T mul() { return x * y; }
	T div() { if (y == 0) return -1; else return x / y; }

};

int main() {
	my_calc c(10, 20);

	cout << c.add() << endl;
	cout << c.sub() << endl;
	cout << c.mul() << endl;
	cout << c.div() << endl;
}