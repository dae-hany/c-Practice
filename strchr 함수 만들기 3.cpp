#include <iostream>
using namespace std;

char* xstrchr(char* first, char* last, char c) {
	// first�� ���� last�� �������� ���߰�
	// first�� ���� �츮�� ã���� �ϴ� ���ڰ� �ƴ϶��
	// first�� �� ĭ �̵� 
	while (first != last and *first != c)
		++first;
	return first == last ? 0 : first; // ã�� ���ڰ� ������ 0(NULL), ������ �ش� ��ġ�� ������ ��ȯ
}

int main() {
	char s[] = "abcdefg";
	char* p;

	p = xstrchr(s, s+5, 'c');
	cout << *p << endl;
}