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

// ㅁㅁ        : 2 bytes
// ㅁㅁㅁㅁ    : 4 bytes 
// ㅁㅁ(ㅁㅁ)  : 4 bytes(padding)
// 총합 : 10 => 가장 큰 자료형(int)의 배수여야 함 => 12 