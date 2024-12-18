#include <iostream>
using namespace std;

class Point {
private:
	int x, y;
public:
	Point(int x, int y) : x(x), y(y) { cout << "생성자 호출 : " << x << " " << y << endl; }
	~Point() { cout << "파괴자 호출 : " << x << " " << y << endl; }
};

int main() {
	Point p1(10, 20);		  // 묵시적 생성자 호출 
	Point p2 = Point(30, 40); // 명시적 생성자 호출 

	Point p3 = p1;

	/* 생성자는 2번 호출되었는데 파괴자는 3번 호출되었다?? */
}