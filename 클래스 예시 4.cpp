#include <iostream> 
using namespace std;

class Car {
private:
	// ����, ��� ������ const ��� 
	const int speed;
	const int gear;
public:
	// �� ����� speed�� gear�� �ʱ�ȭ �� �� ����. 
	Car() {
		cout << "�ڵ��� ź��" << endl;
		speed = 0;
		gear = 0; 
	}
};

int main() {
	Car mycar; 
}