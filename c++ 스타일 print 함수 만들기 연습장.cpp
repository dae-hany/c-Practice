#include <iostream>
using namespace std;

class myPrint {
private:
	int len;
public:
	myPrint() : len(0) {}
	void print(const char* str) { len += printf("%s ", str); }
	void print(int i) { len += printf("%d ", i); }
	void print(double d) { len += printf("%f ", d); }

	myPrint& operator<<(const char* str) { print(str); return *this; }
	myPrint& operator<<(int i) { print(i); return *this; }
	myPrint& operator<<(double d) { print(d); return *this; }
	myPrint& operator<<(myPrint& other) { return *this; } // p.endl()에 대응할 수 있습니다!
	// myPrint& operator (void (*f)()) {f(); return *this;}

	myPrint& endl() { printf("\n"); return *this; }
};

// void endl() { printf("\n";}

int main() {
	myPrint p;
	p << "hello" << 3.14 << 1234 << p.endl();
	p << "hello" << p.endl() << 3.14;
}