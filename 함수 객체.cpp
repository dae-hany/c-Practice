#include <iostream>
using namespace std;

// 함수 객체 정의 
struct Plus {
	int operator()(int a, int b) {
		return a + b;
	}
};

int main() {
	Plus p; // 함수 객체 생성 
	int result = p(3, 5); // 함수처럼 호출, p.operator() 
	cout << "result : " << result << endl;
}