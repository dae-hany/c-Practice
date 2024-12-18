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

	// ������ �����ε� : ���ڿ� ��� 
	void operator<< (const char* str) { print(str); }

	// ������ �����ε� : ���� ��� 
	void operator<< (int i) { print(i); }

	// ������ �����ε� : �Ǽ� ��� 
	void operator<< (double d) { print(d); }
};

int main() {
	myPrint p;

	p << "hello";
	p << 1234;
	p << 3.14;
}