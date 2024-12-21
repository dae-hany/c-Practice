#include <iostream>;
using namespace std;

// 1. 동적 메모리를 여러 개의 포인터로 가리키지 맙시다. 
int main() {
	int* ptr = new int;   // 동적 메모리 할당
	int* qtr = ptr;		  // 동일한 동적 메모리를 가리키는 포인터 

	*ptr = 10;
	cout << *ptr << endl;	// 10 출력 
	cout << *qtr << endl;	// 10 출력 

	delete ptr; // 동적 메모리가 해제되었기 때문에, ptr 뿐만 아니라 qtr도 유효하지 않은 메모리를 참조하게 됨. 

	cout << *ptr << endl; // 쓰레기 값 
	cout << *qtr << endl; // 쓰레기 값 
}