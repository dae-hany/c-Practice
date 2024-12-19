#include <iostream> 
using namespace std;

class A {
	char* ptr;  // 동적 메모리를 할당 받을 포인터
	int size;   // 문자열 크기 저장
public:
	A() {}; // 기본 생성자

	// 파라미터화된 생성자: 문자열과 크기를 받아서 동적 메모리를 할당 
	A(const char* str, int size) {
		ptr = new char[size];     // 동적 메모리 할당
		this->size = size;        // 크기 저장
		memcpy(ptr, str, size);   // 주어진 문자열을 ptr로 복사
	}

	// 복사 생성자: 객체를 복사할 때 호출
	A(const A& a) {
		cout << "copy: " << a.ptr << endl; // 복사된 객체의 ptr을 출력
		ptr = new char[a.size];          // 새로 동적 메모리 할당
		memcpy(ptr, a.ptr, a.size);      // 원본 객체의 메모리를 복사
	}

	~A() { delete ptr; } // 소멸자: 메모리 해제
};

template<typename T> void mycpy(T* dst, T* src, int sz) {
	// 복사 생성자가 자명하지 않은 경우 확인 => is_trivially_copy_constructible
	if (!is_trivially_copy_constructible<T>::value) {
		cout << "복사 생성자가 자명하지 않음" << endl;
		while (sz--) {
			new (dst) T(*src); // 복사 생성자를 의도적으로 호출 
			++dst, ++src;
		}
	}
	// 자명한 경우 
	else {
		cout << "복사 생성자가 자명함" << endl;
 		memcpy(dst, src, sizeof(T) * sz); // 메모리를 그대로 복사  } 
	}
}

int main() {
	A a("hello", 6);
	A b;
	mycpy(&b, &a, 1);
}