#include <iostream>
using namespace std;

template <typename T> struct Node {
	T data;      // 데이터 저장을 위한 변수
	Node* next;  // 다음 노드를 가리키는 포인터
	Node(T a, Node* n) : data(a), next(n) {} // 생성자: 노드를 초기화 (데이터와 다음 노드의 포인터)
};

template <typename T> class slist_iterator {
	Node<T>* current; // 현재 노드를 가리키는 포인터
public:
	// 생성자: 현재 노드를 초기화
	slist_iterator(Node<T>* p = 0) : current(p) {}

	// 비교 연산자: 현재 노드의 데이터와 비교 (템플릿 타입 U)
	template <typename U> bool operator!= (U data) { return current->data != data; }

	// 비교 연산자: 두 이터레이터가 가리키는 노드가 다르면 true
	bool operator != (const slist_iterator<T>& p) { return current != p.current; }

	// 역참조 연산자: 현재 노드의 데이터를 반환
	T& operator*() { return current->data; }

	// 전위 증가 연산자: 현재 노드의 다음 노드로 이동
	slist_iterator<T>& operator++() { current = current->next; return *this; }

	// 후위 증가 연산자 : 현재 노드의 다음 노드로 이동
	slist_iterator<T>& operator++(int) { current = current->next; return *this; }
};

template <typename T>
class slist {
	Node<T>* head; // 리스트의 첫 번째 노드를 가리키는 포인터
public:
	slist() : head(0) {} // 생성자: head를 nullptr로 초기화 (빈 리스트)

	// push_front 함수: 리스트 앞에 데이터를 삽입
	void push_front(const T& a) { head = new Node<T>(a, head); }

	// 이터레이터 타입을 정의 (typedef로 선언)
	typedef slist_iterator<T> iterator;

	// begin 함수: 리스트의 첫 번째 노드를 가리키는 이터레이터 반환
	slist_iterator<T> begin() { return slist_iterator<T>(head); }

	// end 함수: 리스트 끝을 나타내는 이터레이터 반환 (nullptr로 끝을 표시)
	slist_iterator<T> end() { return slist_iterator<T>(0); }
};

// 이제 포인터를 반환하지 않음 
template <typename T1, typename T2> T1 xfind(T1 first, T1 last, T2 c) {
	while (first != last && *first != c)
		++first;
	return first;
}

int main() {
	slist<string> s;
	s.push_front("Hello ");
	s.push_front("C++ ");
	s.push_front("We are ");
	s.push_front("studying ");
	s.push_front("STL");
	s.push_front(" now!");
	// slist<string>::iterator로 표현 가능
	slist<string>::iterator p = xfind(s.begin(), s.end(), "STL");
	cout << *p << endl;
}