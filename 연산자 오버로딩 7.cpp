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

	// ������ �����ε� ������ �����ε�
	NumPair operator+(NumPair& n) {
		return NumPair(x + n.getX(), y + n.getY());
	}

	NumPair operator+(int i) {
		return NumPair(x + i, y + i);
	}

	// ��� �Լ��� + ������ �����ε��� �ǿ����ڰ� 1��������
	// �ֳ��ϸ�, �̹� ��ü�� �ǿ����� ������ �ϱ� ������.
	/*NumPair operator+(int i, NumPair& n) {
		return NumPair(i + n.getX(), i + n.getY());
	}*/
};

// ���� �Լ��� ������ �����ε�
// + ������ �����ε��� �ǿ����ڰ� 2��������
// Ŭ���� ��� �Լ��� �ƴϱ� ������, ��ü�� �ǿ����ڷ� ���� 
NumPair operator+(int i, NumPair& n) {
	return NumPair(i + n.getX(), i + n.getY());
}

int main() {
	NumPair nums1(10, 20);

	nums1 = nums1.operator+(10);
	nums1.print(); // x : 20, y : 30             

	nums1 = 10 + nums1; // ���� ����
	nums1.print(); // x : 30, y : 40
}
