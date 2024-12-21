#include <iostream>;
using namespace std;

// delete 이후, 해제된 동적 메모리를 가리키는 포인터를 0 혹은 nullptr로 초기화합시다.
int main() {
	int* ptr = new int;
	int* qtr = ptr;

	*ptr = 10;
	cout << *ptr << endl;  // 10 출력 
	cout << *qtr << endl;  // 10 출력 

	delete ptr; // 힙 메모리 영역을 해제 하고 
	ptr = 0; // 0 혹은 nullptr로 초기화  
	qtr = 0; // 0 혹은 nullptr로 초기화 

	cout << *ptr << endl; 
	cout << *qtr << endl;
}