#include <iostream>;
using namespace std;

struct position {
	int x, y, z;
};

int main() {
	int a[3] = { 1,2,3 }; 
	int b[3];

	// b = a; �迭�� ���簡 �� ��.
	// for���� ���� ������ ���� �Ҵ��ؾ� ��. 

	position pos = { 1,2,3 };
	position qos;

	// ����ü�� ���簡 �����մϴ�.
	qos = pos;

	cout << pos.x << pos.y << pos.z << endl; // 123 ��� 
	cout << qos.x << qos.y << qos.z << endl; // 123 ��� 

	// ���� ����ü �� ���� => ����� ����ü ���� x => ���� ����� �� 
	pos.x = 3; pos.y = 2; pos.z = 1;

	cout << pos.x << pos.y << pos.z << endl; // 321 ��� 
	cout << qos.x << qos.y << qos.z << endl; // 123 ��� 
}