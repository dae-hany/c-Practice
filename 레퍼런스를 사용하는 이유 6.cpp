#include <iostream> 
using namespace std;

struct in_str {
	int var;
};

struct mystr {
	in_str internal;
};

int main() {
	// ��� �������� �ʹ� ���
	mystr out_str;
	out_str.internal.var = 10;
	cout << out_str.internal.var << endl;

	// ���۷��� -> ��Ī!! 
	int& shortcut = out_str.internal.var;
	cout << shortcut << endl;
}