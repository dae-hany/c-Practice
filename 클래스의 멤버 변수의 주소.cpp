#include <iostream> 
using namespace std;

class Stack {
public:
	int stack[16]; // 4 * 16 = 64 bytes
	int sp; // 4 bytes 

	Stack() : sp(0) {}

	void push(int value) {
		stack[sp++] = value;
	}

	int pop() {
		return stack[--sp];
	}
};

int main() {
	Stack s1;
	Stack s2;

	cout << sizeof(Stack) << endl; // 68 ��� 
	cout << hex;
	// ��� ������ �ּҴ� ���� �ٸ��� 
	cout << "s1 ��ü�� ���� ������ �ּ� : " << & s1.sp << endl; // �� �ּҶ�
	cout << "s2 ��ü�� ���� ������ �ּ� : " << & s2.sp << endl; // �� �ּҴ� �ٸ�

}