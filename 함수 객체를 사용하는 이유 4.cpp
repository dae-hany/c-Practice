#include <iostream> 
using namespace std;

struct UP { bool operator()(int a, int b) { return a > b; } };
struct DOWN { bool operator()(int a, int b) { return a < b; } };
struct ABS { bool operator()(int a, int b) { return abs(a) > abs(b); } };

template <typename T> void Sort(int* x, int n, T cmp) {
	for(int i = 0; i < n; i++)
		for(int j = i; j < n; j++)
			if (cmp(x[i], x[j])) {
				int temp = x[i];
				x[i] = x[j];
				x[j] = temp;
			}
}

int main() {
    int arr[] = { -6, -5, 9, 4, -8 ,1, -3 };

    Sort(arr, 7, UP()); // 오름차순 
    for (auto i : arr)  cout << i << " ";
    cout << endl;

    Sort(arr, 7, DOWN()); // 내림차순
    for (auto i : arr)  cout << i << " ";
    cout << endl;

    Sort(arr, 7, ABS()); // 절댓값 기준 오름차순 
    for (auto i : arr)  cout << i << " ";
    cout << endl;
}