#include <iostream>
using namespace std;

template <typename T> struct Node {
	T data;
	Node* next;
	Node(T a, Node* n) : data(a), next(n) {} 
};

template <typename T> class slist_proxy {
// slist_proxy의 움직임을 보기 위해서 public으로 선언함 
//private:
//	Node<T>* current;
public:
	Node<T>* current;
	slist_proxy(Node<T>* p = 0) : current(p) {} 
	bool operator!=(const slist_proxy& p) { return current != p.current; } // != 연산자 오버로딩 
};

template <typename T> class slist {
//private:
//	Node<T>* head;
//	Node<T>* current;
public:
	Node<T>* head;
	Node<T>* current;
	slist() : head(0) {}
	void push_front(const T& a) { head = new Node<T>(a, head); }
	T& operator*() { return current->data; }
	slist<T>& next() { current = current->next; return *this; }

	slist_proxy<T> begin() { return slist_proxy<T>(head); }
	slist_proxy<T> end() { return slist_proxy<T>(0); }
};

int main() {
	slist<int> s;
	s.push_front(10);
	s.push_front(20);
	s.push_front(30);
	s.push_front(40);

	//slist_proxy<int> p;
	//for (p = s.begin(); p != s.end(); s.next())
	//	cout << *s << endl; // 아무것도 출력되지 않음 

	//slist_proxy<int> p;
	//for (p = s.begin(); p != s.end(); s.next())
	//	cout << p.current->data << endl; // s.next()로 인해 움직이는 것은 slist의 current 가 움직이는 것. slist_proxy의 current는 움직이지 않는다.
	//// 따라서 40만 출력된다. 
	//// slist_proxy의 current가 움직이지 않으므로 무한 루프임.	

	slist_proxy<int> p;
	for (p = s.begin(); p != s.end(); p.current = p.current->next)
		cout << p.current->data << endl;
}