#include <iostream>;
using namespace std;

struct abc {
	int a;
	int b;
	int c;
	int d;
}; // �� ����ü�� ũ��� 16 bytes 

struct position {
	abc a; // 16 bytes
	int x; // 4 bytes
	int y; // 4 bytes
}; // �� ����ü�� ũ���??

int main()
{
	position pos;
	cout << sizeof(pos) << endl; // 24 ���
	return 0;
}