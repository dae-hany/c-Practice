#include <iostream>
using namespace std;

int main() {
	char s[] = "abcdefg"; // �˻� ��� ���ڿ�
	char* p; // ����� ������ ������

	p = strchr(s, 'c'); // ���ڿ� s���� 'c' ���ڸ� �˻�
	cout << p << endl; // cdefg ��� 
	cout << *p << endl; // �˻��� ���ڸ� ��� (���: c)
}
