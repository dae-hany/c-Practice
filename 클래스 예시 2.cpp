#include <iostream> 
using namespace std;

class Car {
private:
	int speed; // --> �ʱ�ȭ ���� ����!
	int gear; // --> �ʱ�ȭ ���� ����!

public:
	int accel() {
		speed += 10;
		return speed;
	}
	int brake() {
		speed -= 10;
		return speed;
	}
}; // �����ݷ� ����

int main() {
	Car mycar;

	cout << mycar.accel() << endl; // ������ �� ���
	cout << mycar.brake() << endl; // ������ �� ���
}