#include <iostream>  
using namespace std;

// 함수 객체 정의 -> 유일한 시그니처
struct UP { bool operator()(int a, int b) { return a > b; } }; // 오름차순
struct DOWN {int operator()(int a, int b) { return a < b; }}; // 내림차순 
struct ABS {int operator()(int a, int b) { return abs(a) > abs(b); }}; // 절댓값 기준 오름차순 

// Sort 함수 오버로딩 : UP cmp
void Sort(int* x, int n, UP cmp) {
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
            if (cmp(x[i], x[j])) {
                int temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
}

// Sort 함수 오버로딩 : Down cmp
void Sort(int* x, int n, DOWN cmp) {
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
            if (cmp(x[i], x[j])) {
                int temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
}

// Sort 함수 오버로딩 : ABS cmp
void Sort(int* x, int n, ABS cmp) {
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
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