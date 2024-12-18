#include <iostream>
using namespace std;

// ======= VECTOR_iterator Ŭ���� =======
template <typename T> class VECTOR_iterator {
private:
	T* current; // ���� ���ͷ����Ͱ� ����Ű�� ��ġ
public:
	VECTOR_iterator(T* p = 0) : current(p) {} // ������: ������ �ʱ�ȭ

	T& operator*() { return *current; } // ������ ������: ���� ��ġ�� ���� ��ȯ
	bool operator==(const VECTOR_iterator& v) { return current == v.current; } // ���ͷ����Ͱ� ���� ��ġ���� ��
	bool operator!=(const VECTOR_iterator& v) { return current != v.current; } // ���ͷ����Ͱ� �ٸ� ��ġ���� ��
	VECTOR_iterator& operator++() { ++current; return *this; } // ���� ���� ������: �����͸� ���� ��ġ�� �̵�
	VECTOR_iterator& operator++(int) { current++; return *this; } // ���� ���� ������: �����͸� ���� ��ġ�� �̵�
};

// ======= VECTOR Ŭ���� =======
template <typename T> class VECTOR {
private:
	T* mPtr;		// �迭�� ���� ������
	int mSize;		// ���� ����� ����
	int mCapacity;	// �Ҵ�� �뷮
	int mIndex;		// ���� ���� ��ġ
public:
	VECTOR(int size = 0) 
		: mPtr(0), mSize(size), mCapacity(size), mIndex(0) {
		mPtr = new T[mSize]; // ũ�⸸ŭ ���� �迭 ����
	}
	int size() { return mSize; }  // ���� ��� ������ ��ȯ
	int capacity() { return mCapacity; } // ���� �Ҵ�� �뷮 ��ȯ

	void push_back(const T& value) {
		if (mIndex == mSize) 
			resize(mSize + 1); // ���� �迭�� ���� á�ٸ� ũ�⸦ �ø�

		*(mPtr + mIndex++) = value; // ���ο� ���� �迭�� �����ϰ� �ε����� ����
	}

	void resize(int s) {
		if (s <= mCapacity) 
			mSize = s; // �� ũ�Ⱑ ���� �뷮���� �۰ų� ������ ũ�⸸ ����
		else {
			mCapacity = s * 2; // ���ο� �뷮�� ũ���� 2��
			mSize = s;		   
			T* tmp = new T[mCapacity]; // ���ο� �迭 �Ҵ�
			memcpy(tmp, mPtr, sizeof(T) * mSize); // ���� �����͸� ����
			delete[] mPtr; // ���� �迭 �޸� ����
			mPtr = tmp; // ���ο� �迭�� ��ü
		}
	}
	T& operator[](int i) { return *(mPtr + i); } // �ε����� ���� ��� ����
	typedef VECTOR_iterator<T> iterator;		 // ���ͷ����� Ÿ�� ����
	iterator begin() { return iterator(mPtr); }  // ���� ���ͷ����� ��ȯ
	iterator end() { return iterator(mPtr + mSize); } // �� ���ͷ����� ��ȯ
};

int main() {
	VECTOR<int> v;

	v.push_back(10);
	cout << v.size() << endl;
	cout << v.capacity() << endl;
	cout << endl;

	v.push_back(20);
	cout << v.size() << endl;
	cout << v.capacity() << endl;
	cout << endl;

	v.push_back(30);
	cout << v.size() << endl;
	cout << v.capacity() << endl;
	cout << endl;

	v[0] = 40;
	cout << v[0] << endl;
	cout << endl;

	VECTOR<int>::iterator it;
	for (it = v.begin(); it != v.end(); ++it)
		cout << *it << endl;
}