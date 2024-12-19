#include <iostream>
using namespace std;

// generic memcpy
// 얕은 복사 문제는 발생하지 않음. 
template <typename T> void mycpy(T* dst, T* src, int sz) {
	memcpy(dst, src, sizeof(T) * sz);
}

int main() {
	char s1[10] = "hello";
	char s2[10];

	mycpy(s2, s1, sizeof(s1));
	cout << s2 << endl;
}