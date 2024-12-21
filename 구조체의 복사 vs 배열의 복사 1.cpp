#include <iostream>;
using namespace std;

struct position {
	int x, y, z;
};

int main() {
	int a[3] = { 1,2,3 }; 
	int b[3];

	// b = a; 배열은 복사가 안 됨.
	// for문을 통해 일일이 값을 할당해야 함. 

	position pos = { 1,2,3 };
	position qos;

	// 구조체는 복사가 가능합니다.
	qos = pos;

	cout << pos.x << pos.y << pos.z << endl; // 123 출력 
	cout << qos.x << qos.y << qos.z << endl; // 123 출력 

	// 원본 구조체 값 변경 => 복사된 구조체 영향 x => 깊은 복사란 뜻 
	pos.x = 3; pos.y = 2; pos.z = 1;

	cout << pos.x << pos.y << pos.z << endl; // 321 출력 
	cout << qos.x << qos.y << qos.z << endl; // 123 출력 
}