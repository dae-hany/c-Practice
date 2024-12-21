#include <iostream>;
using namespace std;

struct pos {
	int a[16];
}; // 이때, 구조체의 크기는 64 bytes

// 구조체 pos의 복사본이 전달됨. 
void func(pos a) {
	for (int i = 0; i < sizeof(a) / sizeof(int); i++) // 64 / 4 = 16번 반복
		cout << a.a[i] << endl;
}

int main() {
	// 구조체
	pos x = { 1,2,3,4,5,6,7,8,9,10, }; // 배열의 남은 부분은 0이 할당됨
	func(x);
	return 0;
}