#include <iostream> 
using namespace std;

// 1��° new ������ : �⺻ 
void* operator new(size_t sz) {
	cout << "operator new" << endl;
	return malloc(sz);
}

// 2��° new ������ : ���ڿ��� ���ڸ� �߰� ���ڷ� ��
void* operator new(size_t sz, const char* s, int n) {
	cout << "operator new2 : " << s << " " << n << endl;
	return malloc(sz);
}

void operator delete(void* p) {
	cout << "operator delete" << endl;
	free(p);
}

int main() {
	int* p = new int; // operator new ��� 
	int* p2 = new("new new new", 2) int; // operator new2 : new new new 2 ��� 

	delete p; // operator delete ��� 
}