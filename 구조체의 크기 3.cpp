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

// けけ        : 2 bytes
// けけけけ    : 4 bytes 
// けけ(けけ)  : 4 bytes(padding)
// 恥杯 : 10 => 亜舌 笛 切戟莫(int)税 壕呪食醤 敗 => 12 