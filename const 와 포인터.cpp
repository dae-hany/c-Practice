#include <iostream>;
using namespace std;

int main() {
	int a = 1;

	// ����Ű�� �ּ� ���� ����
	// �� �ּҿ� �ִ� �� ���� �Ұ��� 
	const int* ptr = &a;

	// ����Ű�� �ּ� ���� ���� 
	// �� �ּҿ� �ִ� �� ���� �Ұ��� 
	int const* ptr = &a;

	// ����Ű�� �ּ� ���� �Ұ��� 
	// �� �ּҿ� �ִ� �� ���� ���� 
	int* const ptr = &a;
	
	// ����Ű�� �ּ� ���� �Ұ��� 
	// �� �ּҿ� �ִ� �� ���� �Ұ��� 
	const int* const ptr = &a;
}