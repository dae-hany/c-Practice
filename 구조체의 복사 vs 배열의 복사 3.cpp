#include <iostream>;
using namespace std;

struct pos {
	int a[16];
}; // �̶�, ����ü�� ũ��� 64 bytes

// ����ü pos�� ���纻�� ���޵�. 
void func(pos a) {
	for (int i = 0; i < sizeof(a) / sizeof(int); i++) // 64 / 4 = 16�� �ݺ�
		cout << a.a[i] << endl;
}

int main() {
	// ����ü
	pos x = { 1,2,3,4,5,6,7,8,9,10, }; // �迭�� ���� �κ��� 0�� �Ҵ��
	func(x);
	return 0;
}