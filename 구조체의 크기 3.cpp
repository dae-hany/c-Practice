#include <iostream>;
using namespace std;

struct position {
	short s; // 2 bytes
	int i; // 4 bytes 
	short ss; // 2 bytes 
};

int main(){
	position pos;
	cout << sizeof(pos) << endl; 
	return 0;
}

// ����        : 2 bytes
// ��������    : 4 bytes 
// ����(����)  : 4 bytes(padding)
// ���� : 10 => ���� ū �ڷ���(int)�� ������� �� => 12 