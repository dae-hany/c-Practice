#include <iostream>
using namespace std;

/* slist 구조 이해부터 합시당 */

template <typename T> struct Node {
	T data;
	Node* next;
	Node(T a, Node* n) : data(a), next(n) {} 
};

template <typename T> class slist {
private:
	Node<T>* head;
	Node<T>* current;
public:
	slist() : head(0) {} 

	void push_front(const T& a) { head = new Node<T>(a, head); }
	slist<T>& next() { current = current->next; return *this; }
	bool end() { return current == 0; }
	slist<T>& begin() { current = head; return *this; }
	T& operator*() { return current->data; }

};

int main() {
	slist<int> s;
	s.push_front(10);
	s.push_front(20);
	s.push_front(30);
	s.push_front(40);

	for (s.begin(); !s.end(); s.next())
		cout << *s << endl;
}