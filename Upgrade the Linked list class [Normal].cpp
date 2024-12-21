#include <iostream>
using namespace std;

template <typename T> struct Node {
	T data;
	Node<T>* next;
	Node(T data, Node<T>* next) : data(data), next(next) {}
};

template <typename T> class mylist {
private:
	Node<T>* head;
	Node<T>* tail;
	Node<T>* current;
	int size;
public:
	mylist() : head(nullptr), current(nullptr), size(0) {}

	mylist<T>& push_front(T value) {
		if (head == nullptr) {
			head = tail = current = new Node<T>(value, nullptr);
		}
		else {
			head = new Node<T>(value, head);
		}
		size++;
		return *this;
	}

	mylist<T>& append(T value) {
		if (head == nullptr) {
			head = tail = current = new Node<T>(value, nullptr);
		}
		else {
			tail->next = new Node<T>(value, nullptr);
			tail = tail->next;
		}
		size++;
		return *this;
	}

	mylist<T>& concat(const mylist& other) {
		tail->next = other.head;
		return *this;
	}

	mylist<T>& next() {
		current = current->next;
		return *this;
	}

	void rewind() {
		current = head;
	}

	T get() {
		return current->data;
	}

	mylist<T>& remove(int index) {
		if (index == 0) {
			Node<T>* temp = head;
			head = head->next;
			delete temp;
		}
		else {
			Node<T>* prev = nullptr;
			Node<T>* temp = head;

			for (int i = 0; i < index; i++) {
				prev = temp;
				temp = temp->next;
			}

			prev->next = temp->next;
			delete temp;
		}
		return *this;
	}

	void printAll() {
		rewind();
		while (current != nullptr) {
			cout << "[" << current->data << "]";
			current = current->next;
		}
	}

	mylist<T>& operator+(T value) { return append(value); }
	mylist<T>& operator+(const mylist& other) { return concat(other); }
	mylist<T>& operator-(int index) { return remove(index); }
};

int main() {
	mylist<int> lst1;
	lst1 + 10 + 20 + 30;
	mylist<int> lst2;
	lst2 + 40 + 50 + 60;

	lst1 + lst2;
	lst1.push_front(100);
	lst1.printAll();
}