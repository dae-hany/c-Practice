#include <iostream> 
using namespace std;

class Car {
private:
	// 만약, 멤버 변수가 const 라면 
	const int speed;
	const int gear;
public:
	// 이 방법은 speed와 gear를 초기화 할 수 없음. 
	Car() {
		cout << "자동차 탄생" << endl;
		speed = 0;
		gear = 0; 
	}
};

int main() {
	Car mycar; 
}