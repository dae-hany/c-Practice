#include <iostream>;
using namespace std;

int main() {
	int a = 1;

	// 가리키는 주소 변경 가능
	// 그 주소에 있는 값 변경 불가능 
	const int* ptr = &a;

	// 가리키는 주소 변경 가능 
	// 그 주소에 있는 값 변경 불가능 
	int const* ptr = &a;

	// 가리키는 주소 변경 불가능 
	// 그 주소에 있는 값 변경 가능 
	int* const ptr = &a;
	
	// 가리키는 주소 변경 불가능 
	// 그 주소에 있는 값 변경 불가능 
	const int* const ptr = &a;
}