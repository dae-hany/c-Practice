#include <iostream>
using namespace std;

template <typename T> struct Node {
	T data;
	Node<T>* next;
	Node(T data, Node<T>* next) : data(data), next(next) {} 
};

template <typename T> class linkedlist {
private:
	Node<T>* head;
	Node<T>* tail;
	Node<T>* current;
	int size;
public:
	linkedlist() : head(nullptr), tail(nullptr), current(nullptr), size(0) {} 

	linkedlist& append(T value) {
		if (size == 0) {
			head = tail = current = new Node<T>(value, nullptr);
		}
		else {
			tail->next = new Node<T>(value, nullptr);
			tail = tail->next;
		}
		size++;
		return *this;
	}
	linkedlist& next() { current = current->next; return *this; }
	T get() { return current->data; }
	void rewind() { current = head; }
	void info() {
		cout << "리스트의 길이 : " << size << endl;
		cout << "현재 가리키고 있는 값 : " << get() << endl;
	}
};

int main() {
	linkedlist<int> ll;

	ll.append(10).append(20).append(30).append(40);

	ll.next().next();
	cout << ll.get() << endl;

	ll.rewind();
	ll.info();
}