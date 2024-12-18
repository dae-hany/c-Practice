#include <iostream>
using namespace std;

template <typename T> struct Node {
	T data;
	Node* next;
	Node(T a, Node* n) : data(a), next(n) {}
};

// slist_proxy -> slist_iterator 라고 부르겠습니다.
template <typename T> class slist_iterator {
private:
	Node<T>* current;
public:
	slist_iterator(Node<T>* p = 0) : current(p) {}
	bool operator!=(const slist_iterator<T>& p) {return current != p.current;}
	T& operator*() { return current->data; }
	slist_iterator<T>& operator++() { current = current->next; return *this; }
	slist_iterator<T>& operator++(int) { current = current->next; return *this; }
};

template <typename T> class slist {
private:
	Node<T>* head;
public:
	slist() : head(0) {} 
	void push_front(const T& a) { head = new Node<T>(a, head); }
	slist_iterator<T> begin() { return slist_iterator<T>(head); }
	slist_iterator<T> end() { return slist_iterator<T>(0); }
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

	slist_iterator<int> p;
	// xfind의 반환 값 : 포인터 
	// slist_iterator : 사용자 정의 반복자 클래스 
	p = xfind(s.begin(), s.end(), 30); // 컴파일 에러 
}