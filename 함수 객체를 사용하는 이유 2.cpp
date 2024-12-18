#include <iostream>
using namespace std;

// C ��Ÿ�� : cmp �Լ� ������
void Sort(int* x, int n, bool (*cmp) (int, int)) {
	for(int i = 0; i < n; i++)
		for (int j = i; j < n; j++) 
			if (cmp(x[i], x[j])) {
				int temp = x[i];
				x[i] = x[j];
				x[j] = temp;
			}
}

// �� �Լ� 
bool cmp1(int a, int b) { return a > b; } // ��������
bool cmp2(int a, int b) { return a < b; } // �������� 
bool cmp3(int a, int b) { return abs(a) > abs(b); } // ���� ���� �������� 

int main() {
	int arr[] = { -6, -5, 9, 4, -8, 1, -3 }; // ������ �迭

	Sort(arr, 7, cmp1);
	for (auto i : arr) cout << i << " ";
	cout << endl;

	Sort(arr, 7, cmp2);
	for (auto i : arr) cout << i << " ";
	cout << endl;

	Sort(arr, 7, cmp3);
	for (auto i : arr) cout << i << " ";
	cout << endl;
}

