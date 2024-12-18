#include <iostream>
using namespace std;

template <typename T> class vector_iterator {
private:
	T* current;
public:
	vector_iterator(T* p = 0) : current(p) {} 
	T& operator*() { return *current; }
	bool operator==(const vector_iterator& v) { return current == v.current; }
	bool operator!=(const vector_iterator& v) { return current != v.current; }
	vector_iterator& operator++() { current++; return *this; }
	vector_iterator& operator++(int) { ++current; return *this; }
};

template <typename T> class vector {
private:
	T* mPtr;
	int mSize;
	int mCapacity;
	int mIndex;
public:
	vector(int size = 0) 
		: mPtr(0), mSize(size), mCapacity(size), mIndex(0) {
		mPtr = new T[mSize];
	} 

	int size() { return mSize; }
	int capacity() { return mCapacity; }

	void push_back(const T& value) {
		if (mIndex == mSize)
			resize(mSize + 1);
		*(mPtr + mIndex++) = value; 
	}

	void resize(int s) {
		if (s <= mCapacity)
			mSize = s;
		else {
			mCapacity = 2 * s;
			mSize = s;
			T* temp = new T[mCapacity];
			memcpy(temp, mPtr, sizeof(T) * mSize);
			delete[] mPtr;
			mPtr = temp;
		}
	}
	T& operator[] (int i) { return *(mPtr + i);}

	typedef vector_iterator<T> iterator;
	iterator begin() { return iterator(mPtr); }
	iterator end() { return iterator(mPtr + mSize); }
	
};

int main() {
	vector<int> v;

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

	vector<int>::iterator it;
	for (it = v.begin(); it != v.end(); ++it)
		cout << *it << endl;
}