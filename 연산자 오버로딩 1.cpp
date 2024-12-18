#include <iostream> 
using namespace std;

class NumPair {
private:
	int x, y;
public:
	NumPair(int x, int y) : x(x), y(y) {}

	void print() {
		cout << "x : " << x << ", y : " << y << endl;
	}

	void add(int a, int b) {
		x += a; y += b;
	}
};

int main() {
	NumPair nums(10, 20);

	nums.add(30, 40);
	nums.print(); // x : 40, y : 60 Ãâ·Â
}