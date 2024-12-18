#include <iostream>
using namespace std;

class smartptr {
private:
	int* ptr;
public:
	smartptr(int* ptr = 0) : ptr(ptr) { cout << "동적 메모리 할당" << endl; }
	~smartptr(){
		cout << "동적 메모리 해제" << endl;
		delete ptr;
	}
};

int main() {
	smartptr ptr = new int;
	// *ptr = 1234; // 값 할당 불가능 
}