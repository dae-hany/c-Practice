#include <iostream>;
using namespace std;

/* 
[���Ӹ��� ����ü�� ����ϴ� ����]
���� ������ �������� �����鼭��, ������ �̸��� �������� ���� 
=> �ڵ� ������ ��� 
*/

struct Outer {
	int a;
	struct { // �� ����ü�� �̸��� �����ϴ�. => ���Ӹ��� ����ü 
		int b; int c;
	};

	void printValues() {
		cout << "a: " << a << ", b: " << b << ", c: " << c << endl;
	}
};

int main() {
	Outer outer;
	outer.a = 10;
	outer.b = 20;  // ���Ӹ��� ����ü�� ����� �ٷ� ���� ����
	outer.c = 30;

	outer.printValues();

	return 0;
}