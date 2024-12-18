#include <iostream>
using namespace std;

// ���ø��� ���� �پ��� �ڷ����� ���� �۵� ���� 
template <typename T> T* xstrchr(T* first, T* last, T c) {
	while (first != last and *first != c)
		++first;
	return first == last ? 0 : first;
}

int main() {
	// char* �� ���ؼ� �� �۵� 
	char s[] = "abcdefg";
	char* p = xstrchr(s, s + 5, 'c');
	cout << *p << endl; // c ���

	// double* �� ���ؼ��� �� �۵� 
	double d[] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
	double* q = xstrchr(d, d + 5, 3.0); // double *q = xstrchr(d, d + 5, 3) �� �Ұ���
	cout << *q << endl; // 3 ��� 
}