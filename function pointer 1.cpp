#include <iostream>;
using namespace std;

// �Լ��� Code�� �޸� ������ ����˴ϴ�. 
void func() {
	cout << "I am Func()" << endl;
}

void gunc() {
	cout << "I am Gunc()" << endl;
}

int main() {
	// �Լ��� �̸��� �� �ּ��Դϴ�. 
	cout << func << endl;
	cout << &func << endl;

	cout << gunc << endl;
	cout << &gunc << endl;
}