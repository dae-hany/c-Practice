#include <iostream>
using namespace std;

char* xstrchr(char* s, char c) {
	// ���ڿ��� ���� �������� �ʾ�����
	// �ش� ���ڸ� ã�� ���ߴٸ�
	// �� ĭ �̵� 
	while (*s != 0 and *s != c)
		++s;

	return *s == 0 ? 0 : s; // ã�� ���ڰ� ������ 0(NULL), ������ �ش� ��ġ�� ������ ��ȯ
}

int main() {
	char s[] = "abcdefg";
	char* p;

	p = xstrchr(s, 'c');
	cout << *p << endl;
}