#include <iostream>;
using namespace std;

// �迭�� �̸� => ù ��° ������ �ּ� => �ּ�? => 8 bytes¥�� �����Ͷ�� �� 
// ����, �迭�� �Լ��� ���ڷ� ���޵� ��, �� �ּҰ� ���޵ǹǷ� array decay ������ �߻��� 
void func(int a[16]) {
	// sizeof(a) = 8 bytes 
	// sizeof(int) = 4 bytes 
	// ���� for���� i = 0, i = 1 �� ���� �ݺ��ϰ� �����. 
	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
		cout << a[i] << endl;
}

int main() {
	// �迭
	int x[16] = { 1,2,3,4,5,6,7,8,9,10 };
	func(x); // 1, 2�� ��µ� 
	return 0;
}