#include <iostream>
#include <list>
using namespace std;

// is a relation : 정석적인 상속 (상속 관계에 집중)
template <typename T> class stack : private list<T> { // list STL을 private 상속(나만 쓸거야)
public:
	void push(const T& value) { list<T> ::push_back(value); } // 부모 클래스의 push_back 호출 
	void pop() { list<T> ::pop_back(); }					  // 부모 클래스의 pop_back 호출 
	T& top() { return list<T>::back(); }					  // 부모 클래스의 back 호출 
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