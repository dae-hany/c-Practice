#include <iostream>
using namespace std;

int main() {
	char s[] = "abcdefg"; // 검색 대상 문자열
	char* p; // 결과를 저장할 포인터

	p = strchr(s, 'c'); // 문자열 s에서 'c' 문자를 검색
	cout << p << endl; // cdefg 출력 
	cout << *p << endl; // 검색한 문자를 출력 (결과: c)
}
