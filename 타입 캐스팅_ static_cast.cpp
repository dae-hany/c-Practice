#include <iostream>
using namespace std;

int main() {
	double pi = 3.14;

	// ���� Ÿ�� ĳ����, ����� ������ �����Ⱚ ��� 
	int* ptr = (int*)&pi;
	cout << *ptr << endl;

	// static_cast : ������ ����ȯ�� ��� 
	// ���� �� �ڵ�� ���� 
	//int* qtr = static_cast<int*>(&pi); 
}