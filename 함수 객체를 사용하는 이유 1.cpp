#include <iostream>
using namespace std;

// ����, ���� �Լ��� ������������ �����ϰų�
// ���� �������� ������������ �����ϰ� �ʹٸ�?
// ��� �ڵ带 �����ؾ� �Ѵ�. 
void Sort(int* x, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (x[i] > x[j]) {
				int temp = x[i];
				x[i] = x[j];
				x[j] = temp;
			}
		}
	}
}

int main() {
	int arr[] = { 6,5,9,4,8,1,3 };
	Sort(arr, 7);

	for (auto i : arr)
		cout << i << " ";
}