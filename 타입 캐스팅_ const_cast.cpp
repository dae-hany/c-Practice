#include <iostream> 
using namespace std;

int main() {
	char str[] = "Hello World!";
	const char* ptr = str; // ptr�� ����Ű�� ���� const�� ���� 

	// ptr[0] = 'A';// ���� �߻�! const ������ ptr�� ����Ű�� ���� ������ �� ����
	// 
	char* c = const_cast<char*>(ptr); // ptr�� const �Ӽ� ���� 
	c[0] = 'A'; // ���� ���� 

	cout << c << endl; // Aello World! ��� 
}