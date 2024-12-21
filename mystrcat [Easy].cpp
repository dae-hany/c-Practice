#include <iostream>
using namespace std;

char* mystrcat(const char* s1, const char* s2) {
	int len1 = 0;
	while (s1[len1] != '\0') len1++;
	int len2 = 0;
	while (s2[len2] != '\0') len2++;

	// 두 문자열의 길이 합 + 1 만큼 메모리 동적 할당
	char* result = new char[len1 + len2 + 1];

	int idx = 0;
	for (int i = 0; i < len1; i++) result[idx++] = s1[i];
	for (int i = 0; i < len2; i++) result[idx++] = s2[i];
	result[idx] = '\0';

	return result;
}

int main() {
	char* str = mystrcat("Hello!", "World!");
	cout << str << endl;
}