#include <iostream> 
using namespace std;

class Car {
private:
	int speed;
	int gear;
public:
	Car() {cout << "Hello!" << endl;}
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
	Car mycar; // 생성자가 호출되면서 "Hello" 출력
}