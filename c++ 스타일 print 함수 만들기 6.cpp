#include <iostream> 
using namespace std;

class myPrint {
private:
	int len;
public:
	// ���ڿ� ���
	void print(const char* str) { len += printf("%s ", str); }

	// ���� ��� 
	void print(int i) { len += printf("%d ", i); }

	// �Ǽ� ��� 
	void print(double d) { len += printf("%f ", d); }

	// function chaining + ������ �����ε� : ���ڿ� ��� 
	myPrint& operator<< (const char* str) { print(str); return *this; }

	// function chaining + ������ �����ε� : ���� ��� 
	myPrint& operator<< (int i) { print(i); return *this; }

	// function chaining + ������ �����ε� : �Ǽ� ��� 
	myPrint& operator<< (double d) { print(d); return *this; }


	// endl �߰�
	myPrint& endl() { printf("\n"); return *this; }
};

int main() {
	myPrint p;

	// ���� �߻�! : p.endl()�� ����ؾ� ��.
	p << "hello" << 1234 << 3.14 << endl;
}