#include <iostream>;
using namespace std;

struct abc {
	int a;
	int b;
	int c;
	int d;
}; // 이 구조체의 크기는 16 bytes 

struct position {
	abc a; // 16 bytes
	int x; // 4 bytes
	int y; // 4 bytes
}; // 이 구조체의 크기는??

int main()
{
	position pos;
	cout << sizeof(pos) << endl; // 24 출력
	return 0;
}