#include <iostream> 
using namespace std;

int main() {
	int a[4] = { 1, 2, 3, 4 };
	int (&b)[4] = a; // �迭�� ���� ���۷��� ���� �����ϴ� ��� : �ڷ��� (&������)[] 

	for (int i = 0; i < sizeof(b) / sizeof(int); i++)
		cout << *(b + i) << endl;
}