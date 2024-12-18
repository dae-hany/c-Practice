#include <iostream>
using namespace std;

template <typename T> struct Node {
	T data;
	Node* next;
	Node(T a, Node* n) : data(a), next(n) {} 
};

// slist_proxy ���� 
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

	// begin �� end�� slist_proxy�� ����
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
	// ���� slist_proxy�� ������(=, != ��) �����ε��� �������� �ʾ� ���� �߻� 
	for (p = s.begin(); p != s.end(); s.next())
		cout << *s << endl;
}