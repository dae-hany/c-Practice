#include <iostream>
using namespace std; 

class AAA {
public:
	int x, y;
	AAA() : x(10), y(10) {} 
};

class BBB {
public:
	int i, j, k;
	BBB() {} 
};

int main() {
	AAA a; BBB b;

	// b = a; // ��ȯ �����ڰ� �����Ƿ�, Ŭ���� �� �� ��ȯ �Ұ��� 
}