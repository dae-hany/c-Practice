#include <iostream>
using namespace std;

class Point {
private:
	int x, y;
public:
	Point(int x, int y) : x(x), y(y) { cout << "������ ȣ�� : " << x << " " << y << endl; }
	Point(const Point& other) { 
		cout << "���� ������ ȣ�� : " << x << " " << y << endl; // ���� ������ ���
	} 
	~Point() { cout << "�ı��� ȣ�� : " << x << " " << y << endl; }
};

int main() {
	Point p1(10, 20);		  // ������ ������ ȣ�� 
	Point p2 = Point(30, 40); // ����� ������ ȣ�� 

	Point p3 = p1; // ���� ������ ȣ�� 

	/* �׷���, p3�� x�� y ���� �̻��ϰ� �Ҵ�Ǵ� ���� �߻� */
}