#include <iostream> 
using namespace std;

// �Լ� �����ε�
void print(const char* str) { // "���ڿ� ���ͷ�" = const char[], const char* �̹Ƿ� const ��������� �� 
	printf("%s ", str);
}

void print(int i) {
	printf("%d ", i);
}

void print(double d) {
	printf("%f ", d);
}

int main() {
	print("hello"); // "hello" ��µ�
	print(1234); // 1234 ��µ�
	print(3.14); // 3.14 ��µ� 
}