#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> vec;

	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);

	// iterator 예시 1 : 정석 
	vector<int>::iterator it;
	for (it = vec.begin(); it != vec.end(); it++)
		cout << *it << endl;

	// iterator 예시 2 : auto
	for (auto it2 = vec.begin(); it2 != vec.end(); it2++)
		cout << *it2 << endl;

	// iterator 예시 3 : 모던 c++
	for (auto it3 : vec)
		cout << it3 << endl;
}