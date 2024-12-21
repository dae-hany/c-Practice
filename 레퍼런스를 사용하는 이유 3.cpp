#include <iostream>;
using namespace std;

struct str {
	char str[1024];  // 1024 bytes 
	long long ll;	 // 8 bytes
}; // 총, 1032 bytes 크기의 구조체 

// call by "reference" => 구조체 참조를 전달 => 효율
void func(str& s) {
	cout << sizeof(s) << endl;	// 8 출력  
	cout << s.ll << endl;       // 1234 출력 
}

int main() {
	str s;
	s.ll = 1234;
	func(s); 
}