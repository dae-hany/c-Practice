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

	int getX() { return x; }
	int getY() { return y; }
};

int main() {
	NumPair nums1(10, 20);
	NumPair nums2(30, 40);
	nums1.add(nums2.getX(), nums2.getY());

	nums1.print(); // x : 40, y : 60 Ãâ·Â
}