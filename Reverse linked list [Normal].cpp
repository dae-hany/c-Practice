#include <iostream>
using namespace std;

template <typename T> struct Node {
	T data;
	Node<T>* next;
	Node(T a, Node<T>* n) : data(a), next(n) {} 
};

template <typename T> class linkedlist_iterator {
private:
	Node<T>* current;
public:
	linkedlist_iterator(Node<T>* p = 0) : current(p) {} 
	template <typename U> bool operator != (U data) { return current->data != data; }
	bool operator !=(const linkedlist_iterator& p) { return current != p.current; }
	T& operator*() { return current->data; }
	linkedlist_iterator& operator++() { current = current->next; return *this; }
	linkedlist_iterator& operator++(int) { current = current->next; return *this; }
};

template <typename T> class linkedlist {
private:
	Node<T>* head;
	Node<T>* tail;
	int size;
public:
	linkedlist(Node<T>* p = 0) : head(p), tail(p), size(0) {}
	void push_back(const T& value){ 
		if (size == 0) {
			head = tail = new Node<T>(value, 0);
		}else {
			tail->next = new Node<T>(value, 0);
			tail = tail -> next;
		}
		size++;
	}
	void reverse() {
		Node<T>* prev = nullptr;
		Node<T>* current = head;
		Node<T>* next = nullptr;

		tail = head;					// Tail이 역순 후 첫 노드가 됨
		while (current != nullptr) {	
			next = current->next;		// 다음 노드 저장
			current->next = prev;		// 현재 노드의 next를 이전 노드로 변경
			prev = current;				// 이전 노드를 현재 노드로 이동
			current = next;				// 현재 노드를 다음 노드로 이동
		}	
		head = prev;					// Head를 마지막 노드로 업데이트
	}
	typedef linkedlist_iterator<T> iterator;
	iterator begin() { return iterator(head); }
	iterator end() { return iterator(0); }
};

int main() {
	linkedlist<int> ll;

	ll.push_back(10);
	ll.push_back(20);
	ll.push_back(30);

	ll.reverse();

	linkedlist<int>::iterator p;
	for (p = ll.begin(); p != ll.end(); p++)
		cout << *p << endl;
}