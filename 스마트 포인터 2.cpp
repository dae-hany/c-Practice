#include <iostream>
using namespace std;

class smartptr {
private:
	int* ptr;
public:
	smartptr(int* ptr = 0) : ptr(ptr) { cout << "���� �޸� �Ҵ�" << endl; }
	~smartptr() { cout << "���� �޸� ����" << endl; delete ptr; }

	int& operator*() { return *this -> ptr; } // return *ptr;
};

int main() {
	smartptr ptr = new int;
	*ptr = 1234;

	cout << "ptr is " << *ptr << endl;
}