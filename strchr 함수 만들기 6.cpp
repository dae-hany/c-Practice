#include <iostream>
using namespace std;

// past the end ��� ���� 
template <typename T1, typename T2> T1* xstrchr(T1* first, T1* last, T2 c) {
	while (first != last and *first != c)
		++first;
	return first; // ���� ã�� ��� : ���� ��ġ ��ȯ 
				  // ���� �� ã�� ��� : first == last �̹Ƿ� last�� ��ȯ 
}

int main() {
	char s[] = "abcdefg";
	char* p = xstrchr(s, s + 7, 'h'); // 'h'�� �˻�
	if (p != s + 7) { // �����Ͱ� ������(last)�� ����Ű�� ���� �ʴٴ� �� => ���� ã����
		cout << *p << endl; // �� ���
	}
	else {
		cout << "Not found" << endl; // ���� �� ã���� 
	}
}