#include <iostream> 
using namespace std;

int len;

void print(const char* str) {
	len += printf("%s ", str);
}

void print(int i) {
	len += printf("%d ", i);
}

void print(double d) {
	len += printf("%f ", d);
}

int main() {
	print("hello"); // "hello " ��µ�
	print(1234); // "1234 " ��µ�
	print(3.14); // "3.140000 " ��µ� 

	printf("%d ", len); // ��µ� ���ڿ��� ���� 20 ��� 
}
