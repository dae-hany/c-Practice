#include <iostream>
using namespace std;

template <typename T1, typename T2> T1* xstrchr(T1* first, T1* last, T2 c) {
	while (first != last and *first != c)
		++first;
	return first == last ? 0 : first;
}

int main() {
	char s[] = "abcdefg";
	char* p = xstrchr(s, s + 5, 'c');
	cout << *p << endl;

	double d[] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
	double* q = xstrchr(d, d + 5, 3); // 이제 구간과 대상의 자료형이 달라도 잘 작동
	cout << *q << endl;
}
