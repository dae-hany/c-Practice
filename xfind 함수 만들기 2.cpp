#include <iostream>
using namespace std;

template <typename T> struct Node {
	T data;
	Node* next;
	Node(T a, Node* n) : data(a), next(n) {} 
};

// slist_proxy 선언 
template <typename T> class slist_proxy {
private:
	Node<T>* current;
public:
	slist_proxy(Node<T>* p = 0) : current(p) {}
};

template <typename T> class slist {
private:
	Node<T>* head;
	Node<T>* current;
public:
	slist() : head(0) {} 
	void push_front(const T& a) { head = new Node<T>(a, head); }
	T& operator*() { return current->data; }
	slist<T>& next() { current = current->next; return*this; }

	// begin 과 end를 slist_proxy로 관리
	slist_proxy<T> begin() { return slist_proxy<T>(head); }
	slist_proxy<T> end() { return slist_proxy<T>(0); }
};

int main() {
	slist<int> s;
	s.push_front(10);
	s.push_front(20);
	s.push_front(30);
	s.push_front(40);

	slist_proxy<int> p;
	// 현재 slist_proxy는 연산자(=, != 등) 오버로딩을 제공하지 않아 에러 발생 
	for (p = s.begin(); p != s.end(); s.next())
		cout << *s << endl;
}