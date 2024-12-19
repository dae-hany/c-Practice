#include <iostream>
#include <list>
using namespace std;

// is a relation : �������� ��� (��� ���迡 ����)
template <typename T> class stack : private list<T> { // list STL�� private ���(���� ���ž�)
public:
	void push(const T& value) { list<T> ::push_back(value); } // �θ� Ŭ������ push_back ȣ�� 
	void pop() { list<T> ::pop_back(); }					  // �θ� Ŭ������ pop_back ȣ�� 
	T& top() { return list<T>::back(); }					  // �θ� Ŭ������ back ȣ�� 
};

int main() {
	stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);

	cout << s.top() << endl; s.pop();
	cout << s.top() << endl; s.pop();
	cout << s.top() << endl; s.pop();
}