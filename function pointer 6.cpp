#include <iostream> 
using namespace std;

int add(int a, int b) {
	return a + b;
}

// int�� ��ȯ�ϰ� ���ڰ� int, int�� �Լ��� ��ȯ�ϴ� �Լ� 
// �� �Լ��� ���ڰ� int c�̴�.
int (*(get)(int c))(int, int) {
	cout << c << endl;
	return &add;
}

int main() {
	int (*ptr_add) (int, int);
	ptr_add = get(1);					// get �Լ��� ���� 1 ��� 
	cout << ptr_add(10, 20) << endl;	// add(10,20) ���� => 30 ��� 

	int (**ptr_ptr_add)(int, int);      // ptr_add �� ����Ű�� �Լ� ������ 
	ptr_ptr_add = &ptr_add;
	cout << (*ptr_ptr_add)(10, 20) << endl; // add(10, 20) ���� => 30 ��� 

	int (* (*ptr_get)(int) )(int, int);		// get �� ����Ű�� �Լ� ������ => ��ȯ�� : �Լ� ������ 
	ptr_get = &get;
	cout << ptr_get(1)(10, 20) << endl;		// get�� ���� 1 ����� add(10, 20) => 30 ��� 
}