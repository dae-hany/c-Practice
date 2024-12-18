#include <iostream>
using namespace std;

// ======= VECTOR_iterator 클래스 =======
template <typename T> class VECTOR_iterator {
private:
	T* current; // 현재 이터레이터가 가리키는 위치
public:
	VECTOR_iterator(T* p = 0) : current(p) {} // 생성자: 포인터 초기화

	T& operator*() { return *current; } // 역참조 연산자: 현재 위치의 값을 반환
	bool operator==(const VECTOR_iterator& v) { return current == v.current; } // 이터레이터가 같은 위치인지 비교
	bool operator!=(const VECTOR_iterator& v) { return current != v.current; } // 이터레이터가 다른 위치인지 비교
	VECTOR_iterator& operator++() { ++current; return *this; } // 전위 증가 연산자: 포인터를 다음 위치로 이동
	VECTOR_iterator& operator++(int) { current++; return *this; } // 후위 증가 연산자: 포인터를 다음 위치로 이동
};

// ======= VECTOR 클래스 =======
template <typename T> class VECTOR {
private:
	T* mPtr;		// 배열의 시작 포인터
	int mSize;		// 현재 요소의 개수
	int mCapacity;	// 할당된 용량
	int mIndex;		// 현재 삽입 위치
public:
	VECTOR(int size = 0) 
		: mPtr(0), mSize(size), mCapacity(size), mIndex(0) {
		mPtr = new T[mSize]; // 크기만큼 동적 배열 생성
	}
	int size() { return mSize; }  // 현재 요소 개수를 반환
	int capacity() { return mCapacity; } // 현재 할당된 용량 반환

	void push_back(const T& value) {
		if (mIndex == mSize) 
			resize(mSize + 1); // 현재 배열이 가득 찼다면 크기를 늘림

		*(mPtr + mIndex++) = value; // 새로운 값을 배열에 삽입하고 인덱스를 증가
	}

	void resize(int s) {
		if (s <= mCapacity) 
			mSize = s; // 새 크기가 현재 용량보다 작거나 같으면 크기만 변경
		else {
			mCapacity = s * 2; // 새로운 용량은 크기의 2배
			mSize = s;		   
			T* tmp = new T[mCapacity]; // 새로운 배열 할당
			memcpy(tmp, mPtr, sizeof(T) * mSize); // 기존 데이터를 복사
			delete[] mPtr; // 기존 배열 메모리 해제
			mPtr = tmp; // 새로운 배열로 교체
		}
	}
	T& operator[](int i) { return *(mPtr + i); } // 인덱스를 통해 요소 접근
	typedef VECTOR_iterator<T> iterator;		 // 이터레이터 타입 정의
	iterator begin() { return iterator(mPtr); }  // 시작 이터레이터 반환
	iterator end() { return iterator(mPtr + mSize); } // 끝 이터레이터 반환
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