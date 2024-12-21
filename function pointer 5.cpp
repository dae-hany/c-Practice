#include <iostream>
using namespace std;

struct mystr{
	int i;
	void (*ptr)(); // 함수 포인터를 멤버로 하는 구조체입니다. 
};

void func() { cout << "Good!" << endl; }
void gunc() { cout << "Bad!" << endl; }

int main() {
	mystr m;
	m.i = 0;

	for (int i = 0; i < 10; i++){
		m.i++;

		if (m.i % 2 == 0) 
			m.ptr = &func;
		else 
			m.ptr = &gunc;

		m.ptr();
	}
}