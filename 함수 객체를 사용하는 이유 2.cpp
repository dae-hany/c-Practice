#include <iostream>
using namespace std;

// C 스타일 : cmp 함수 포인터
void Sort(int* x, int n, bool (*cmp) (int, int)) {
	for(int i = 0; i < n; i++)
		for (int j = i; j < n; j++) 
			if (cmp(x[i], x[j])) {
				int temp = x[i];
				x[i] = x[j];
				x[j] = temp;
			}
}

// 비교 함수 
bool cmp1(int a, int b) { return a > b; } // 오름차순
bool cmp2(int a, int b) { return a < b; } // 내림차순 
bool cmp3(int a, int b) { return abs(a) > abs(b); } // 절댓값 기준 오름차순 

int main() {
	int arr[] = { -6, -5, 9, 4, -8, 1, -3 }; // 정렬할 배열

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

