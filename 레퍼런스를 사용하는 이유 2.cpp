#include <iostream>;
using namespace std;

struct str {
	char str[1024];  // 1024 bytes 
	long long ll;	 // 8 bytes
}; // ��, 1032 bytes ũ���� ����ü 

// call by reference => ����ü �ּҸ� ���� => ȿ��
// �׷��� ���� �ڵ忡�� �����ؾ� �ϴ� �κ��� ���Ƽ� ������. 
void func(str* s) {
	cout << sizeof(s) << endl;	// 8 ���  
	cout << (*s).ll << endl;	// 1234 ��� 
	// cout << s -> ll << endl;
}

int main() {
	str s;
	s.ll = 1234;
	func(&s); // ����ü �ּҸ� ���� 
}