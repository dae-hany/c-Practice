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
};

int main() {
	NumPair nums1(10, 20);
	NumPair nums2(30, 40);

	nums1 = nums1.operator+(10); // 왼쪽 코드와 비교했을 때 완전한 동치입니다.
	nums1.print();               // 내부적으로 객체의 +가 operator+() 라는 멤버 함수로 치환됨!

	nums1 = 10 + nums1; // 그래서 이 코드는 에러가 발생함 (객체의 +가 아님)
}
