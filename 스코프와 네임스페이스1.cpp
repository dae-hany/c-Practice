#include <iostream>
using namespace std;

int i = 20; // 전역 변수 

int main() {
	int i = 10;
	cout << i << endl; // main 지역 변수 i 출력 
	cout << ::i << endl; // 전역 변수 i 출력 
}