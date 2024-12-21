#include <iostream> 
using namespace std;

class Car {
private:
	int speed;
	int gear;
public:
	// 생성자(Car 클래스 안의 Car 라는 내부 함수, speed에 접근 가능함)
	Car() {
		cout << "자동차 탄생" << endl;
		speed = 0; // speed 변수 초기화 가능
		gear = 0; // gear 변수 초기화 가능 
	}
	int accel() {
		speed += 10;
		return speed;
	}
	int brake() {
		speed -= 10;
		return speed;
	}
};

int main() {
	Car mycar; // 1. "자동차 탄생" 출력 

	cout << mycar.accel() << endl; // 2. 10 출력 
	cout << mycar.brake() << endl; // 3. 0 출력 
}