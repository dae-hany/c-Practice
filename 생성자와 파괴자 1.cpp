#include <iostream> 
using namespace std;

class Car {
private:
	int speed;
	int gear;
public:
	Car(int s, int g) : speed(s), gear(g) { cout << "�ڵ��� ź��" << endl; }
	~Car() {cout << "�ڵ��� �ı�" << endl; }

	// �ı��ڴ� �ݵ�� �������� �ʾƵ� ��.
	// ��ü�� �Ҹ��� �� �ڵ������� �����Ϸ��� ���� ȣ���. 
};

int main() {
	Car mycar(10, 10);
	// �����ڰ� ȣ�� �ǰ� -> ��ü�� �Ҹ��� �� -> �ı��� ȣ���.
}