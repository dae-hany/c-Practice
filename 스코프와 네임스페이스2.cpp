#include <iostream> 
using namespace std;

int i = 20;

// ���� �����̽� ���� ���� �����̽�
namespace AAA {
	int i = 30;

	namespace BBB
	{
		int i = 40;
	}
}

int main() {
	int i = 10;
	cout << i << endl; // ���� ���� ��� 
	cout << ::i << endl; // ���� ���� ��� 
	cout << AAA::i << endl; // AAA ���ӽ����̽��� ���� ��� 
	cout << AAA::BBB::i << endl; // AAA ���� BBB ���ӽ����̽��� ���� ��� 
}