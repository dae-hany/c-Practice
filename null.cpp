#include <iostream> 
using namespace std;
// �Ʒ� �ڵ尡 �ֵ� ���� NULL�� ���� 0 ��� 
// #define NULL 0 

void func(int n) {
	cout << "void func(int) called" << endl;
}

void func(char* p) {
	cout << "void func(char*) called" << endl;
}

int main() {
	func(0); // func(int n) ȣ�� 
	func(NULL); // NULL�� ��� int 0�̹Ƿ� func(int n) ȣ�� 
}
