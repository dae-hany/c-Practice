#include <iostream> 
using namespace std;

struct in_str {
	int var;
};

struct mystr {
	in_str internal;
};

int main() {
	// 어우 변수명이 너무 길다
	mystr out_str;
	out_str.internal.var = 10;
	cout << out_str.internal.var << endl;

	// 레퍼런스 -> 별칭!! 
	int& shortcut = out_str.internal.var;
	cout << shortcut << endl;
}