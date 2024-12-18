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

	// * ������ �����ε� 
	T& operator*() { return current->data; }

	// ���� ������ ++ �����ε�
	slist_proxy<T>& operator++() {current = current->next;return *this;}
	// ���� ������ ++ �����ε� 
	slist_proxy<T>& operator++(int) { current = current->next; return *this; }
};

template <typename T> class slist {
private:
	Node<T>* head;
	// current�� slist_proxy���� ������ 
public:
	slist() : head(0) {} 
	void push_front(const T& a) { head = new Node<T>(a, head); }
	slist_proxy<T> begin() { return slist_proxy<T>(head); }
	slist_proxy<T> end() { return slist_proxy<T>(0); }
	// next ������ slist_proxy�� ++ ������ �����ε����� ��ü�Ǿ���.
	// *������ �����ε� ���� slist_proxy���� ��ü�Ͽ���. 
};

int main() {
	slist<int> s;
	s.push_front(10);
	s.push_front(20);
	s.push_front(30);
	s.push_front(40);

	// ���� slist_proxy�� ���� ���� �� �۵���. 
	slist_proxy<int> p;
	for (p = s.begin(); p != s.end(); p++)
		cout << *p << endl;
}