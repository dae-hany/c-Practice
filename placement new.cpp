#include <iostream> 
using namespace std;

class klass {
private:
	int a = 0x41424344;
public:
	klass() { cout << "생성자!" << endl; }

	void foo() { cout << "fooo!" << endl; }
};

int main() {
	char reverse[1024] = "hello"; // 이미 존재하는 메모리 블록 
	cout << reverse << endl; // hello 출력 
	cout << sizeof("hello") << endl;

	// placement new : reverse 배열의 시작 주소를 메모리 블록으로 지정하여 객체 생성 
	klass* ptr = new (reverse) klass;

	cout << (void*)reverse << endl; // (void *) 캐스팅으로 reverse 배열의 시작 주소 출력 
	cout << ptr << endl; // ptr 포인터의 값 출력 (reverse 배열의 시작 주소와 동일)

	cout << reverse << endl; // 이상한 문자열 출력 
}