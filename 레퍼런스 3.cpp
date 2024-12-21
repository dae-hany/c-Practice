#include <iostream>;
using namespace std;

int main(){
	int a = 100;

	// int& b; // 레퍼런스는 선언과 동시에 초기화 되어야 함. 
	int& b = a;

	// 또한 레퍼런스는 변경 불가능 
	int c = 200;
	// &b = c;

	cout << b << endl;
}