#include <iostream>;
using namespace std;

int main(){
	int a = 100;

	// int& b; // ���۷����� ����� ���ÿ� �ʱ�ȭ �Ǿ�� ��. 
	int& b = a;

	// ���� ���۷����� ���� �Ұ��� 
	int c = 200;
	// &b = c;

	cout << b << endl;
}