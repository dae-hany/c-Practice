#include <iostream> 
using namespace std;

class Car {
private:
	// 만약, 멤버 변수가 const 더라도
	const int speed;
	const int gear;
public:
	// 생성자의 초기화 리스트를 이용하면 초기화가 가능함. (정석적인 초기화)
	Car(int speed = 0, int gear = 0) : speed(speed), gear(gear) {
		cout << "자동차 탄생" << endl;
	}
};

int main() {
	Car mycar;
}