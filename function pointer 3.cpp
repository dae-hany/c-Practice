#include <iostream>;
using namespace std;

int sum(int a, int b) {
	return a + b;
}

void print(string str) {
	cout << str << endl;
}

int main() {
	// �Լ� ������ ���� 
	int (*ptr_sum)(int, int);
	void (*ptr_print)(string);

	// �Լ� ����Ű�� 
	ptr_sum = sum;
	ptr_print = print;

	// �Լ� �����ͷ� �Լ� ȣ���ϱ�
	cout << ptr_sum(10, 20) << endl;
	ptr_print("hello");
}