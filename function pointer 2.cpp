#include <iostream>;
using namespace std;

void func() {
	cout << "I am Func()" << endl;
}

void gunc() {
	cout << "I am Gunc()" << endl;
}

int main() {
	// 함수를 가리키는 포인터 선언, 연산자 우선순위로 괄호 주의 
	// return_type (*pointer_name)(parameter_types);
	void (*ptr)();
	void (*qtr)();

	ptr = &func; // ptr = func; 와 동치 
	qtr = &gunc; // qtr = gunc; 와 동치 

	cout << hex;
	cout << "func 함수의 주소 : " << &func << endl;
	cout << "ptr이 가리키는 주소 : " << ptr << endl;

	cout << "gunc 함수의 주소 : " << &gunc << endl;
	cout << "qtr이 가리키는 주소 : "<< qtr << endl;
}