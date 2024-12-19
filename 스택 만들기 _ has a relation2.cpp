#include <iostream>
#include <list>
using namespace std;

// has a relation : 한 클래스가 다른 클래스의 구성 요소 
template <typename T, typename U = list<T>> class stack {
private:
	U st;
public:
	void push(const T& value) { st.push_back(value); } // 멤버 변수 list의 push_back 호출 
	void pop() { st.pop_back(); }					   // 멤버 변수 list의 pop_back 호출 
	T& top() { return st.back(); }					   // 멤버 변수 list의 back 호출 
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