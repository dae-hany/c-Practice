#include <iostream>
using namespace std;

template <typename T> class smartptr{
private:
	T* ptr;
public:
	smartptr(T* ptr = 0) : ptr(ptr) { cout << "���� �޸� �Ҵ�" << endl; }
	~smartptr() { cout << "���� �޸� ����" << endl; delete ptr; }
	T& operator*() { return *ptr; }
	T* operator->() { return ptr; }
};

class member {
private:
	int id;
public:
	member(int id) : id(id) {} 
	void print() { cout << id << endl; }
};

int main() {
	smartptr<member> ptr = new member(10);
	ptr->print();
}