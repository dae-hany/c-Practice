#include <iostream>
#include <ctime>
using namespace std;

// 함수 포인터를 통해 함수를 인자로 전달
// 함수를 변수처럼 쓸 수 있게 해준다! => 함수를 인자로 전달할 수 있다!
double time_measure(void (*ptr)()){
	clock_t start, end;

	start = clock();
	for (int i = 0; i < 100000; i++)
		ptr(); // 인자로 전달된 함수 실행 
	end = clock();
	return (double)(end - start) / CLOCKS_PER_SEC;
}

void func() { for (int i = 0; i < 100; i++); }
void gunc() { for (int i = 0; i < 1000; i++); }

int main() {
	cout << time_measure(&func) << endl;
	cout << time_measure(&gunc) << endl;
}