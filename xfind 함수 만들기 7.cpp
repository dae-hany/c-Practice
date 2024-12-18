#include <iostream>
using namespace std;

template <typename T> struct Node {
	T data;
	Node* next;
	Node(T a, Node* n) : data(a), next(n) {}
};

template <typename T> class slist_iterator {
private: 
	Node<T>* current;
public:
	slist_iterator(Node<T>* p = 0) : current(p) {} 
	template<typename U> bool operator!=(U data) { return current->data != data; }
	bool operator!=(const slist_iterator<T>& p) { return current != p.current; }
	T& operator*() { return current->data; }
	slist_iterator<T>& operator++() { current = current->next; return *this; }
	slist_iterator<T>& operator++(int) { current = current->next; return *this; }
};

template <typename T> class slist {
private:
	Node<T>* head;
public:
	slist() : head(0) {} 
	void push_front(const T& a) { head = new Node(a, head); }
	slist_iterator<T> begin() { return slist_iterator<T>(head); }
	slist_iterator<T> end() { return slist_iterator<T>(0); }
	typedef slist_iterator<T> iterator;
};

template <typename T1, typename T2> T1 xfind(T1 first, T1 last, T2 c) {
	while (first != last and *first != c) ++first;
	return first;
}

int main() {
	slist<int> s;
	s.push_front(10);
	s.push_front(20);
	s.push_front(30);

	slist<int>::iterator it = xfind(s.begin(), s.end(), 20);
	cout << *it << endl;

	slist<string> s1;
	s1.push_front("hello");
	s1.push_front("hi");
	slist<string>::iterator it1 = xfind(s1.begin(), s1.end(), "hi");
	cout << *it1 << endl;

	char s2[] = "abcdefg";
	char* p = xfind(s2, s2 + 7, 'a'); 
	cout << *p << endl;
}