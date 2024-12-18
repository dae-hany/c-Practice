#include <iostream>
using namespace std;

// 만약, 정렬 함수를 내림차순으로 변경하거나
// 절댓값 기준으로 오름차순으로 변경하고 싶다면?
// 모든 코드를 수정해야 한다. 
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