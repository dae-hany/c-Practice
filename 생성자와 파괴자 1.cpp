#include <iostream> 
using namespace std;

class Car {
private:
	int speed;
	int gear;
public:
	Car(int s, int g) : speed(s), gear(g) { cout << "자동차 탄생" << endl; }
	~Car() {cout << "자동차 파괴" << endl; }

	// 파괴자는 반드시 선언하지 않아도 됨.
	// 객체가 소멸할 때 자동적으로 컴파일러에 의해 호출됨. 
};

int main() {
	Car mycar(10, 10);
	// 생성자가 호출 되고 -> 객체가 소멸할 때 -> 파괴자 호출됨.
}