#include <iostream> 
using namespace std;

class Car {
private:
	int speed;
	int gear;
public:
	// ������(Car Ŭ���� ���� Car ��� ���� �Լ�, speed�� ���� ������)
	Car() {
		cout << "�ڵ��� ź��" << endl;
		speed = 0; // speed ���� �ʱ�ȭ ����
		gear = 0; // gear ���� �ʱ�ȭ ���� 
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
	Car mycar; // 1. "�ڵ��� ź��" ��� 

	cout << mycar.accel() << endl; // 2. 10 ��� 
	cout << mycar.brake() << endl; // 3. 0 ��� 
}