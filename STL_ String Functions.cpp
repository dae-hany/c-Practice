#include <iostream>
using namespace std;

// 1. str.length()
// 2. str.find("문자열"), str.find('문자') -> 해당 문자열, 문자가 처음 나타나는 인덱스 
// 3. str.replace(시작 인덱스, 길이, 문자열)
// 4. str.erase(시작 인덱스, 길이)
// 5. str.append(문자열)
int main() {
	string str("The quick brown fox jumps over the lazy dog");

	cout << str.length() << endl; // 43 출력 
	cout << str.find("fox") << endl; // 16 출력
	cout << str.find('b') << endl; // 10 출력 
	cout << str.find("bear") << endl; // bear가 없으므로 -1 출력 

	str.erase(str.find("quick"), 6);
	cout << str << endl; // "The brown fox jumps over the lazy dog"

	str.replace(str.find("fox"), 3, "bear");
	cout << str << endl; // "The brown bear jumps over the lazy dog"

	str.append(", Wow!"); // same to 'str +'
	cout << str << endl; // "The brown bear jumps over the lazy dog, Wow!"

	string apple = "apple";
	string big = "big";
	string cat = "cat";

	cout << (apple > big) << endl; // false => 0 출력 
	cout << (apple < big) << endl; // true => 1 출력
	cout << (big == cat) << endl; // false => 0 출력 
}
