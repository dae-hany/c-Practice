#include <iostream>
using namespace std;

char* xstrchr(char* s, char c) {
	// 문자열의 끝에 도달하지 않았으며
	// 해당 문자를 찾지 못했다면
	// 한 칸 이동 
	while (*s != 0 and *s != c)
		++s;

	return *s == 0 ? 0 : s; // 찾는 문자가 없으면 0(NULL), 있으면 해당 위치의 포인터 반환
}

int main() {
	char s[] = "abcdefg";
	char* p;

	p = xstrchr(s, 'c');
	cout << *p << endl;
}