#include <iostream>
using namespace std;

int* func() {
	// int num[] = { 1,2,3,4 }; 일반적인 배열을 선언하지 않고 
	int* num = new int[4]; // heap 영역에 동적 메모리를 할당하고, 그 영역을 num 포인터로 가리키자.

	num[0] = 1;
	num[1] = 2;
	num[2] = 4;
	num[3] = 4;
	return num;		
}

int main() {
	int* ptr = func();

	// 댕글링 포인터 문제를 new로 해결하였습니다!
	cout << ptr[0] << endl;
	cout << ptr[1] << endl;
}
