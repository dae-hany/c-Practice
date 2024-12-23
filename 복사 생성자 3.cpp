#include <iostream>
using namespace std;

class Point {
private:
	int x, y;
public:
	Point(int x, int y) : x(x), y(y) { cout << "생성자 호출 : " << x << " " << y << endl; }
	Point(const Point& other) : x(other.x), y(other.y) {
		cout << "복사 생성자 호출 : " << x << " " << y << endl; // 복사 생성자 명시
	}
	~Point() { cout << "파괴자 호출 : " << x << " " << y << endl; }
};

int main() {
	Point p1(10, 20);		  // 묵시적 생성자 호출 
	Point p2 = Point(30, 40); // 명시적 생성자 호출 

	Point p3 = p1; // 복사 생성자 호출 
}