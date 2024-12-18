#include <iostream>
using namespace std;

int main() {
	double pi = 3.14;

	// 억지 타입 캐스팅, 출력은 되지만 쓰레기값 출력 
	int* ptr = (int*)&pi;
	cout << *ptr << endl;

	// static_cast : 안전한 형변환만 허용 
	// 따라서 이 코드는 에러 
	//int* qtr = static_cast<int*>(&pi); 
}