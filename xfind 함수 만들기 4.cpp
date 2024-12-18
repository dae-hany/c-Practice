#include <iostream>
using namespace std;

template <typename T> struct Node {
	T data;
	Node* next;
	Node(T a, Node* n) : data(a), next(n) {} 
};

template <typename T> class slist_proxy {
private:
	Node<T>* current;
public:
	slist_proxy(Node<T>* p = 0) : current(p) {}
	bool operator!=(const slist_proxy& p) { return current != p.current; }

	// * 연산자 오버로딩 
	T& operator*() { return current->data; }

	// 전위 연산자 ++ 오버로딩
	slist_proxy<T>& operator++() {current = current->next;return *this;}
	// 후위 연산자 ++ 오버로딩 
	slist_proxy<T>& operator++(int) { current = current->next; return *this; }
};

template <typename T> class slist {
private:
	Node<T>* head;
	// current는 slist_proxy에서 관리함 
public:
	slist() : head(0) {} 
	void push_front(const T& a) { head = new Node<T>(a, head); }
	slist_proxy<T> begin() { return slist_proxy<T>(head); }
	slist_proxy<T> end() { return slist_proxy<T>(0); }
	// next 역할은 slist_proxy의 ++ 연산자 오버로딩으로 대체되었음.
	// *연산자 오버로딩 또한 slist_proxy에서 대체하였음. 
};

int main() {
	slist<int> s;
	s.push_front(10);
	s.push_front(20);
	s.push_front(30);
	s.push_front(40);

	// 이제 slist_proxy는 아주 아주 잘 작동함. 
	slist_proxy<int> p;
	for (p = s.begin(); p != s.end(); p++)
		cout << *p << endl;
}