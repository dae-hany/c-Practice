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

	// b = a; // 변환 생성자가 없으므로, 클래스 간 형 변환 불가능 
}