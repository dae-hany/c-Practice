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
	Car mycar; // �����ڰ� ȣ��Ǹ鼭 "Hello" ���
}