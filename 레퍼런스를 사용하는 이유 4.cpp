#include <iostream> 
using namespace std;

int main() {
	int a[4] = { 1, 2, 3, 4 };
	int (&b)[4] = a; // 배열에 대한 레퍼런스 변수 선언하는 방법 : 자료형 (&변수명)[] 

	for (int i = 0; i < sizeof(b) / sizeof(int); i++)
		cout << *(b + i) << endl;
}