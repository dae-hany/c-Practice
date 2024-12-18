#include <iostream> 
using namespace std;

// 1번째 new 연산자 : 기본 
void* operator new(size_t sz) {
	cout << "operator new" << endl;
	return malloc(sz);
}

// 2번째 new 연산자 : 문자열과 숫자를 추가 인자로 함
void* operator new(size_t sz, const char* s, int n) {
	cout << "operator new2 : " << s << " " << n << endl;
	return malloc(sz);
}

void operator delete(void* p) {
	cout << "operator delete" << endl;
	free(p);
}

int main() {
	int* p = new int; // operator new 출력 
	int* p2 = new("new new new", 2) int; // operator new2 : new new new 2 출력 

	delete p; // operator delete 출력 
}