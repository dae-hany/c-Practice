#include <iostream>
using namespace std;

int* func() {
	// int num[] = { 1,2,3,4 }; �Ϲ����� �迭�� �������� �ʰ� 
	int* num = new int[4]; // heap ������ ���� �޸𸮸� �Ҵ��ϰ�, �� ������ num �����ͷ� ����Ű��.

	num[0] = 1;
	num[1] = 2;
	num[2] = 4;
	num[3] = 4;
	return num;		
}

int main() {
	int* ptr = func();

	// ��۸� ������ ������ new�� �ذ��Ͽ����ϴ�!
	cout << ptr[0] << endl;
	cout << ptr[1] << endl;
}
