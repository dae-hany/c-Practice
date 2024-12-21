#include <iostream>
using namespace std;

// 구조체 선언
// struct + 구조체 이름 
struct idcard {
	int id;
	string name;
	double score;
	int department;
};

int main() {
	// 구조체 변수를 선언과 동시에 초기화할 수 있음. 이건 가능함. 
	const idcard id = { 1234, "최대한", 4.0, 123 };
}