#include <iostream>
using namespace std;

struct mystr{
	int i;
	void (*ptr)(); // �Լ� �����͸� ����� �ϴ� ����ü�Դϴ�. 
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