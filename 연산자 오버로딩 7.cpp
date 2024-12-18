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

	// 연산자 오버로딩 사이의 오버로딩
	NumPair operator+(NumPair& n) {
		return NumPair(x + n.getX(), y + n.getY());
	}

	NumPair operator+(int i) {
		return NumPair(x + i, y + i);
	}

	// 멤버 함수의 + 연산자 오버로딩은 피연산자가 1개여야함
	// 왜냐하면, 이미 객체가 피연산자 역할을 하기 때문에.
	/*NumPair operator+(int i, NumPair& n) {
		return NumPair(i + n.getX(), i + n.getY());
	}*/
};

// 전역 함수로 연산자 오버로딩
// + 연산자 오버로딩은 피연산자가 2개여야함
// 클래스 멤버 함수가 아니기 때문에, 객체를 피연산자로 지정 
NumPair operator+(int i, NumPair& n) {
	return NumPair(i + n.getX(), i + n.getY());
}

int main() {
	NumPair nums1(10, 20);

	nums1 = nums1.operator+(10);
	nums1.print(); // x : 20, y : 30             

	nums1 = 10 + nums1; // 이제 가능
	nums1.print(); // x : 30, y : 40
}
