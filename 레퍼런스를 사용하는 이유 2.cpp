#include <iostream>;
using namespace std;

struct str {
	char str[1024];  // 1024 bytes 
	long long ll;	 // 8 bytes
}; // 총, 1032 bytes 크기의 구조체 

// call by reference => 구조체 주소를 전달 => 효율
// 그런데 기존 코드에서 수정해야 하는 부분이 많아서 귀찮음. 
void func(str* s) {
	cout << sizeof(s) << endl;	// 8 출력  
	cout << (*s).ll << endl;	// 1234 출력 
	// cout << s -> ll << endl;
}

int main() {
	str s;
	s.ll = 1234;
	func(&s); // 구조체 주소를 전달 
}