#include <iostream> 
#include <string>
using namespace std;

int main() {
	string str;
	cout << "Input String : ";
	getline(cin, str);

	int key;
	cout << "Input Key : ";
	cin >> key;

	cout << "Cipher string : ";
	for (int i = 0; i < str.length(); i++) {
		char c = (char)(str[i] + key);
		if (c != '#')
			cout << (char)(str[i] + key);
		else
			cout << " ";
	}
}