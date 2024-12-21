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
	idcard id; 

	// 구조체의 멤버 변수를 초기화 하는 방법 1
	id.id = 1234;
	id.name = "최대한";
	id.score = 4.0;
	id.department = 123;
}