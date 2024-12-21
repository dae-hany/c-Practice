#include <iostream> 
using namespace std;

template <typename T> struct Node {
	T data;
	Node<T>* next;
	Node(T a, Node<T>* n) : data(a), next(n) {} 
};

template <typename T> class slist_iterator{
private:
	Node<T>* current;
public:
	slist_iterator(Node<T>* p = 0) : current(p) {}
	template <typename U> bool operator!= (U data) { return current->data != data; }
	bool operator!=(const slist_iterator<T>& p) { return current != p.current; }
	T& operator*() { return current->data; }
	slist_iterator<T>& operator++() { current = current->next; return *this; }
	slist_iterator<T>& operator++(int) { current = current->next; return *this; }
};

template <typename T> class slist {
private:
	Node<T>* head;
public:
	slist(Node<T>* p = 0) : head(p) {} 
	void push_front(const T& value) { head = new Node<T>(value, head); }

	typedef slist_iterator<T> iterator;
	iterator begin() { return iterator(head); }
	iterator end() { return iterator(0); }
};

template <typename T1, typename T2> T1 xfind(T1 first, T1 last, T2 c) {
	while (first != last and *first != c) first++; 
	return first;
}

int main() {
	slist<int> s;
	s.push_front(10);
	s.push_front(20);
	s.push_front(30);

	slist<int> ::iterator it;
	for (it = s.begin(); it != s.end(); it++)
		cout << *it << endl;

	slist_iterator<int> p;
	p = xfind(s.begin(), s.end(), 10);
	cout << *p << endl;
}