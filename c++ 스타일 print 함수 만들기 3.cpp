#include <iostream> 
using namespace std;

class myPrint {
private:
	int len;
public:
	// �Լ� �����ε� : ���ڿ� ���
	void print(const char* str) {
		len += printf("%s ", str);
	}

	// �Լ� �����ε� : ���� ���
	void print(int i) {
		len += printf("%d ", i);
	}

	// �Լ� �����ε� : �Ǽ� ��� 
	void print(double d) {
		len += printf("%f ", d);
	}
};

int main() {
	myPrint p;

	p.print("hello");
	p.print(1234);
	p.print(3.14);
}
