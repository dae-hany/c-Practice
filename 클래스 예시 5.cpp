#include <iostream> 
using namespace std;

class Car {
private:
	// ����, ��� ������ const ����
	const int speed;
	const int gear;
public:
	// �������� �ʱ�ȭ ����Ʈ�� �̿��ϸ� �ʱ�ȭ�� ������. (�������� �ʱ�ȭ)
	Car(int speed = 0, int gear = 0) : speed(speed), gear(gear) {
		cout << "�ڵ��� ź��" << endl;
	}
};

int main() {
	Car mycar;
}