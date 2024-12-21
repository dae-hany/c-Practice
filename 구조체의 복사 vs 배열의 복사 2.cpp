#include <iostream>;
using namespace std;

// 배열의 이름 => 첫 번째 원소의 주소 => 주소? => 8 bytes짜리 포인터라는 뜻 
// 따라서, 배열이 함수의 인자로 전달될 때, 그 주소가 전달되므로 array decay 현상이 발생함 
void func(int a[16]) {
	// sizeof(a) = 8 bytes 
	// sizeof(int) = 4 bytes 
	// 따라서 for문은 i = 0, i = 1 일 때만 반복하고 종료됨. 
	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
		cout << a[i] << endl;
}

int main() {
	// 배열
	int x[16] = { 1,2,3,4,5,6,7,8,9,10 };
	func(x); // 1, 2만 출력됨 
	return 0;
}