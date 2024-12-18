#include <iostream>
using namespace std;

template <typename T> struct Node {
	T data;
	Node* next;
	Node(T a, Node* n) : data(a), Node(n) {} 
};

template <typename T> class slist {
private:
	Node<T>* head;
public:
	slist() : head(0) {} 
	void push_front(const T& a) { head = new Node<T>(a, head); }
};

template <typename T1, typename T2> T1* xfind(T1* first, T1* last, T2 c) {
	while (first != last and *first != c)
		++first;
	return first;
}

int main() {
	slist<int> s;
	s.push_front(10);
	s.push_front(20);
	s.push_front(30);
	s.push_front(40);

	// 이런 slist와 같은 자료 구조에서는 xstrchr이 작동할 수 없음. 
	slist<int>* p = xfind(s, s + 4, 30);
}