#include <iostream>;
using namespace std;

struct position {
	short x; // 2 bytes
	int y;   // 4 bytes
};

int main() {
	cout << sizeof(position) << endl; // 6 bytes 일 줄 알았는데 왜 8 bytes가 출력되는가? => padding!!
}

/*
[padding 이란?]
구조체의 크기는 "기본 자료형들 중에서" 가장 큰 자료형의 배수여야 함. 
패딩 => 메모리를 효율적으로 관리하기 위해 구조체의 크기를 조정하는 것. 
*/