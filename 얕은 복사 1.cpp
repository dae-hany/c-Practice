#include <iostream>
using namespace std;

template <typename T> class smartptr {
private:
	T* ptr;
public:
	smartptr(T* ptr = 0) : ptr(ptr) { cout << "���� �޸� �Ҵ�" << endl; }
	~smartptr() { cout << "���� �޸� ����" << endl; delete ptr; }
	T& operator*() { return *ptr; }
	T* operator->() { return ptr; }
};

void func() {
	smartptr<int> p1 = new int;
	*p1 = 10;

	// p2�� p1�� ������ �ּҸ� ����Ű�� �� 
	smartptr<int> p2 = p1;
	
	cout << *p1 << endl;
	cout << *p2 << endl;

	/* 
	1. �Լ��� ����Ǹ鼭 p1�� p2�� �Ҹ��� ��, �ı����� delete�� ����� 
	2. p1�� p2�� ����Ű�� ��ġ�� �����ϹǷ� ������ �ּҰ� �� �� delete �Ǵ� ���� ������ �߻���. 
	3. ���� ���� 
	*/
}

int main() {
	func();
}