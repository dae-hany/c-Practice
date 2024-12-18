#include <iostream>
using namespace std;

// 1. str.length()
// 2. str.find("���ڿ�"), str.find('����') -> �ش� ���ڿ�, ���ڰ� ó�� ��Ÿ���� �ε��� 
// 3. str.replace(���� �ε���, ����, ���ڿ�)
// 4. str.erase(���� �ε���, ����)
// 5. str.append(���ڿ�)
int main() {
	string str("The quick brown fox jumps over the lazy dog");

	cout << str.length() << endl; // 43 ��� 
	cout << str.find("fox") << endl; // 16 ���
	cout << str.find('b') << endl; // 10 ��� 
	cout << str.find("bear") << endl; // bear�� �����Ƿ� -1 ��� 

	str.erase(str.find("quick"), 6);
	cout << str << endl; // "The brown fox jumps over the lazy dog"

	str.replace(str.find("fox"), 3, "bear");
	cout << str << endl; // "The brown bear jumps over the lazy dog"

	str.append(", Wow!"); // same to 'str +'
	cout << str << endl; // "The brown bear jumps over the lazy dog, Wow!"

	string apple = "apple";
	string big = "big";
	string cat = "cat";

	cout << (apple > big) << endl; // false => 0 ��� 
	cout << (apple < big) << endl; // true => 1 ���
	cout << (big == cat) << endl; // false => 0 ��� 
}
