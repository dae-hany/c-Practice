#include <iostream>
using namespace std;

// string도 Standard Template Library 다. 
int main() {
	// 1. C 스타일 초기화 
	string one("lottery winner!");
	cout << one << endl;

	// 2. 문자를 n번 반복하여 문자열 만들기
	string two(20, '$');
	cout << two << endl;

	// 3. string 객체끼리의 복사 
	string three(one);
	cout << three << endl;

	// 4. string 끼리의 + 연산 : 문자열 이어붙이기
	one += "Oops!";
	cout << one << endl;

	// 5. 문자열 변경 
	two = "Sorry! That was ";
	three[0] = 'P';

	// 
	string four = two + three;
	cout << four << endl;

	// 6. C 스타일 문자열 배열 
	char alls[] = "All's well that ends well";
	string five(alls, 5); // alls 배열의 5개 문자만 사용 
	cout << five << endl;

	// 7. 문자열 인덱스 지정하여 접근 - ver 1
	string six(alls + 6, alls + 10); // 인덱스 6 이상 10 미만
	cout << six << endl;

	// 8. 문자열 인덱스 지정하여 접근 - ver 2 
	string seven(&alls[6], &alls[10]);
	cout << seven << endl;

	// 9. 다른 문자열의 특정 부분 복사 
	string eight(four, 7, 16);
	cout << eight << endl;
}