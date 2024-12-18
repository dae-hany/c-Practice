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

	// ��ü �ڽ��� ��ȯ�� ���� �ֽ��ϴ�.
	NumPair operator+(NumPair& n) {
		return NumPair(x + n.getX(), y + n.getY());
	}
};

int main() {
	NumPair nums1(10, 20);
	NumPair nums2(30, 40);

	nums1 = nums1 + nums2; // �׷��� �Ҵ絵 ��������!
	nums1.print(); // x : 40, y : 60 ���  
}
