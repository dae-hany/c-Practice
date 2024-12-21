#include <iostream>;
using namespace std;

void func() {
	cout << "I am Func()" << endl;
}

void gunc() {
	cout << "I am Gunc()" << endl;
}

int main() {
	// �Լ��� ����Ű�� ������ ����, ������ �켱������ ��ȣ ���� 
	// return_type (*pointer_name)(parameter_types);
	void (*ptr)();
	void (*qtr)();

	ptr = &func; // ptr = func; �� ��ġ 
	qtr = &gunc; // qtr = gunc; �� ��ġ 

	cout << hex;
	cout << "func �Լ��� �ּ� : " << &func << endl;
	cout << "ptr�� ����Ű�� �ּ� : " << ptr << endl;

	cout << "gunc �Լ��� �ּ� : " << &gunc << endl;
	cout << "qtr�� ����Ű�� �ּ� : "<< qtr << endl;
}