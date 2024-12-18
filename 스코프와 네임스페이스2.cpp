#include <iostream> 
using namespace std;

int i = 20;

// 네임 스페이스 안의 네임 스페이스
namespace AAA {
	int i = 30;

	namespace BBB
	{
		int i = 40;
	}
}

int main() {
	int i = 10;
	cout << i << endl; // 지역 변수 출력 
	cout << ::i << endl; // 전역 변수 출력 
	cout << AAA::i << endl; // AAA 네임스페이스의 변수 출력 
	cout << AAA::BBB::i << endl; // AAA 안의 BBB 네임스페이스의 변수 출력 
}