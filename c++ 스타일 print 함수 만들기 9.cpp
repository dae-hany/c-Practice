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

	// function chaining + ������ �����ε� : endl() �Լ� ������ 
	myPrint& operator<< (void (*f)()) { f(); return *this; }
};

// ���� endl �Լ�
void endl() { printf("\n"); }

int main() {
	myPrint p;

	p << "hello" << 1234 << 3.14 << endl; // ���������� �۵�!

	p << "hello" << endl << 1234; // ���������� �۵�!
}