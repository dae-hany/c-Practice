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
	const idcard id; // 구조체 변수에 const를 할당할 경우

	// 구조체의 멤버 변수를 직접 초기화하는 것은 불가능함. 
	id.id = 1234;
	id.name = "최대한";
	id.score = 4.0;
	id.department = 123;
}