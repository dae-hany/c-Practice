#include <iostream>
using namespace std;

template <typename T> struct Node {
	T data;      // ������ ������ ���� ����
	Node* next;  // ���� ��带 ����Ű�� ������
	Node(T a, Node* n) : data(a), next(n) {} // ������: ��带 �ʱ�ȭ (�����Ϳ� ���� ����� ������)
};

template <typename T> class slist_iterator {
	Node<T>* current; // ���� ��带 ����Ű�� ������
public:
	// ������: ���� ��带 �ʱ�ȭ
	slist_iterator(Node<T>* p = 0) : current(p) {}

	// �� ������: ���� ����� �����Ϳ� �� (���ø� Ÿ�� U)
	template <typename U> bool operator!= (U data) { return current->data != data; }

	// �� ������: �� ���ͷ����Ͱ� ����Ű�� ��尡 �ٸ��� true
	bool operator != (const slist_iterator<T>& p) { return current != p.current; }

	// ������ ������: ���� ����� �����͸� ��ȯ
	T& operator*() { return current->data; }

	// ���� ���� ������: ���� ����� ���� ���� �̵�
	slist_iterator<T>& operator++() { current = current->next; return *this; }

	// ���� ���� ������ : ���� ����� ���� ���� �̵�
	slist_iterator<T>& operator++(int) { current = current->next; return *this; }
};

template <typename T>
class slist {
	Node<T>* head; // ����Ʈ�� ù ��° ��带 ����Ű�� ������
public:
	slist() : head(0) {} // ������: head�� nullptr�� �ʱ�ȭ (�� ����Ʈ)

	// push_front �Լ�: ����Ʈ �տ� �����͸� ����
	void push_front(const T& a) { head = new Node<T>(a, head); }

	// ���ͷ����� Ÿ���� ���� (typedef�� ����)
	typedef slist_iterator<T> iterator;

	// begin �Լ�: ����Ʈ�� ù ��° ��带 ����Ű�� ���ͷ����� ��ȯ
	slist_iterator<T> begin() { return slist_iterator<T>(head); }

	// end �Լ�: ����Ʈ ���� ��Ÿ���� ���ͷ����� ��ȯ (nullptr�� ���� ǥ��)
	slist_iterator<T> end() { return slist_iterator<T>(0); }
};

// ���� �����͸� ��ȯ���� ���� 
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
	// slist<string>::iterator�� ǥ�� ����
	slist<string>::iterator p = xfind(s.begin(), s.end(), "STL");
	cout << *p << endl;
}