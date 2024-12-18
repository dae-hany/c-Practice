#include <iostream>
#include <vector> // ���� ����� ���� �ʿ�
using namespace std;

// 1. vec.push_back(��) : ������ �� �ڿ� �� �߰� 
// 2. vec.size() : ���� ���Ϳ� �����ϴ� ������ ���� 
// 3. vec.capacity() : ���� ������ �뷮(������ �� �ִ� ������ ����)
// 4. vec.pop_back() : ������ �� �� �� ����
// 5. vec.back()     : ������ �� �� �� ���� 
// 6. vec.empty()    : ���Ͱ� ����ִٸ� 1, �ƴϸ� 0 

int main() {
	vector<int> vec1; // �� ���� ����

	// push_back : �� �߰� 
	vec1.push_back(10); // vec1 = [10]
	vec1.push_back(20); // vec1 = [10, 20]
	vec1.push_back(30); // vec1 = [10, 20, 30]

	cout << vec1.size() << endl;       // ���Ϳ� ����� ���� ���� => 3 
	cout << vec1.capacity() << endl;  // ������ ���� �뷮 ��� => 3

	vector<int> vec2(20); // ũ�Ⱑ 20�� ���� ����
	cout << vec2.size() << endl;       // �ʱ�ȭ�� ���� ���� ��� => 20 
	cout << vec2.capacity() << endl;  // �뷮 ��� => 20 

	// for ������ ����Ͽ� vec1�� ��� ���� ���
	for (int i = 0; i < vec1.size(); i++)
		cout << vec1[i] << endl;

	cout << endl;

	// while ������ ����Ͽ� ������ ������ ���Һ��� ����ϰ� ����
	while (!vec1.empty()) {
		cout << vec1.back() << endl; // ������ ���� ���
		vec1.pop_back();             // ������ ���� ����
	}
}