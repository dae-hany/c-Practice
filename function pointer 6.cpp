#include <iostream> 
using namespace std;

int add(int a, int b) {
	return a + b;
}

// int를 반환하고 인자가 int, int인 함수를 반환하는 함수 
// 이 함수는 인자가 int c이다.
int (*(get)(int c))(int, int) {
	cout << c << endl;
	return &add;
}

int main() {
	int (*ptr_add) (int, int);
	ptr_add = get(1);					// get 함수로 인해 1 출력 
	cout << ptr_add(10, 20) << endl;	// add(10,20) 실행 => 30 출력 

	int (**ptr_ptr_add)(int, int);      // ptr_add 를 가리키는 함수 포인터 
	ptr_ptr_add = &ptr_add;
	cout << (*ptr_ptr_add)(10, 20) << endl; // add(10, 20) 실행 => 30 출력 

	int (* (*ptr_get)(int) )(int, int);		// get 을 가리키는 함수 포인터 => 반환값 : 함수 포인터 
	ptr_get = &get;
	cout << ptr_get(1)(10, 20) << endl;		// get을 통해 1 출력후 add(10, 20) => 30 출력 
}