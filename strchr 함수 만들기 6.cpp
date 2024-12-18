#include <iostream>
using namespace std;

// past the end 방식 적용 
template <typename T1, typename T2> T1* xstrchr(T1* first, T1* last, T2 c) {
	while (first != last and *first != c)
		++first;
	return first; // 값을 찾은 경우 : 현재 위치 반환 
				  // 값을 못 찾은 경우 : first == last 이므로 last를 반환 
}

int main() {
	char s[] = "abcdefg";
	char* p = xstrchr(s, s + 7, 'h'); // 'h'를 검색
	if (p != s + 7) { // 포인터가 마지막(last)을 가리키고 있지 않다는 것 => 값을 찾았음
		cout << *p << endl; // 값 출력
	}
	else {
		cout << "Not found" << endl; // 값을 못 찾았음 
	}
}