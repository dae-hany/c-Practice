#include <iostream>
using namespace std;

template <typename T> struct Node {
	T data;
	Node* next;
	Node(T a, Node* n) : data(a), next(n) {} 
};

template <typename T> class slist_proxy {
// slist_proxy�� �������� ���� ���ؼ� public���� ������ 
//private:
//	Node<T>* current;
public:
	Node<T>* current;
	slist_proxy(Node<T>* p = 0) : current(p) {} 
	bool operator!=(const slist_proxy& p) { return current != p.current; } // != ������ �����ε� 
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
	//	cout << *s << endl; // �ƹ��͵� ��µ��� ���� 

	//slist_proxy<int> p;
	//for (p = s.begin(); p != s.end(); s.next())
	//	cout << p.current->data << endl; // s.next()�� ���� �����̴� ���� slist�� current �� �����̴� ��. slist_proxy�� current�� �������� �ʴ´�.
	//// ���� 40�� ��µȴ�. 
	//// slist_proxy�� current�� �������� �����Ƿ� ���� ������.	

	slist_proxy<int> p;
	for (p = s.begin(); p != s.end(); p.current = p.current->next)
		cout << p.current->data << endl;
}