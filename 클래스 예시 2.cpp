#include <iostream> 
using namespace std;

class Car {
private:
	int speed; // --> 초기화 되지 않음!
	int gear; // --> 초기화 되지 않음!

public:
	int accel() {
		speed += 10;
		return speed;
	}
	int brake() {
		speed -= 10;
		return speed;
	}
}; // 세미콜론 주의

int main() {
	Car mycar;

	cout << mycar.accel() << endl; // 쓰레기 값 출력
	cout << mycar.brake() << endl; // 쓰레기 값 출력
}