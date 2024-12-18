#include <iostream>
using namespace std;

char* xstrchr(char* first, char* last, char c) {
	// first가 아직 last에 도달하지 못했고
	// first의 값이 우리가 찾고자 하는 문자가 아니라면
	// first를 한 칸 이동 
	while (first != last and *first != c)
		++first;
	return first == last ? 0 : first; // 찾는 문자가 없으면 0(NULL), 있으면 해당 위치의 포인터 반환
}

int main() {
	char s[] = "abcdefg";
	char* p;

	p = xstrchr(s, s+5, 'c');
	cout << *p << endl;
}