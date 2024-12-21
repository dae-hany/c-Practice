#include <iostream>
#include <ctime>
using namespace std;

// �Լ� �����͸� ���� �Լ��� ���ڷ� ����
// �Լ��� ����ó�� �� �� �ְ� ���ش�! => �Լ��� ���ڷ� ������ �� �ִ�!
double time_measure(void (*ptr)()){
	clock_t start, end;

	start = clock();
	for (int i = 0; i < 100000; i++)
		ptr(); // ���ڷ� ���޵� �Լ� ���� 
	end = clock();
	return (double)(end - start) / CLOCKS_PER_SEC;
}

void func() { for (int i = 0; i < 100; i++); }
void gunc() { for (int i = 0; i < 1000; i++); }

int main() {
	cout << time_measure(&func) << endl;
	cout << time_measure(&gunc) << endl;
}