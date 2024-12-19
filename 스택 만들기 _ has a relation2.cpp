#include <iostream>
#include <list>
using namespace std;

// has a relation : �� Ŭ������ �ٸ� Ŭ������ ���� ��� 
template <typename T, typename U = list<T>> class stack {
private:
	U st;
public:
	void push(const T& value) { st.push_back(value); } // ��� ���� list�� push_back ȣ�� 
	void pop() { st.pop_back(); }					   // ��� ���� list�� pop_back ȣ�� 
	T& top() { return st.back(); }					   // ��� ���� list�� back ȣ�� 
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