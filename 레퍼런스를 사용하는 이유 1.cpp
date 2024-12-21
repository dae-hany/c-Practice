#include <iostream>;
using namespace std;

struct str {
	char str[1024];  // 1024 bytes 
	long long ll;	 // 8 bytes
}; // 총, 1032 bytes 크기의 구조체 

// call by value => 구조체를 통째로 전달 => 비효율 
void func(str s) {
	cout << sizeof(s) << endl; // 1032 출력
	cout << s.ll << endl;	   // 1234 출력 
}

int main() {
	str s;
	s.ll = 1234;
	func(s);
}