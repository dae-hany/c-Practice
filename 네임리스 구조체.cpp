#include <iostream>;
using namespace std;

/* 
[네임리스 구조체를 사용하는 이유]
내부 변수를 논리적으로 묶으면서도, 별도의 이름을 정의하지 않음 
=> 코드 가독성 향상 
*/

struct Outer {
	int a;
	struct { // 이 구조체는 이름이 없습니다. => 네임리스 구조체 
		int b; int c;
	};

	void printValues() {
		cout << "a: " << a << ", b: " << b << ", c: " << c << endl;
	}
};

int main() {
	Outer outer;
	outer.a = 10;
	outer.b = 20;  // 네임리스 구조체의 멤버에 바로 접근 가능
	outer.c = 30;

	outer.printValues();

	return 0;
}