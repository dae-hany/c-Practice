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

	// +에 대한 연산자 오버로딩!
	void operator+(NumPair& n) {
		x += n.getX(), y += n.getY();
	}

	// -에 대한 연산자 오버로딩!
	void operator-(NumPair& n) {
		x -= n.getX(), y -= n.getY();
	}

	// *에 대한 연산자 오버로딩!
	void operator*(NumPair& n) {
		x *= n.getX(), y *= n.getY();
	}
};

int main() {
	NumPair nums1(10, 20);
	NumPair nums2(30, 40);

	nums1 + nums2; // (10 + 30), (20 + 40)
	nums1.print(); // x : 40, y : 60 출력 

	nums1 - nums2; // (40 - 30), (60 - 40)
	nums1.print(); // x : 10, y : 20 출력 

	nums1* nums2; // (10 * 30), (20 * 40)
	nums1.print(); // x : 300, y : 800 출력 
}
