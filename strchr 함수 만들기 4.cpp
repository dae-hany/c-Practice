#include <iostream>
using namespace std;

// 템플릿을 통해 다양한 자료형에 대해 작동 가능 
template <typename T> T* xstrchr(T* first, T* last, T c) {
	while (first != last and *first != c)
		++first;
	return first == last ? 0 : first;
}

int main() {
	// char* 에 대해서 잘 작동 
	char s[] = "abcdefg";
	char* p = xstrchr(s, s + 5, 'c');
	cout << *p << endl; // c 출력

	// double* 에 대해서도 잘 작동 
	double d[] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
	double* q = xstrchr(d, d + 5, 3.0); // double *q = xstrchr(d, d + 5, 3) 은 불가능
	cout << *q << endl; // 3 출력 
}