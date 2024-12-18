#include <iostream>  
using namespace std;

// �Լ� ��ü ���� -> ������ �ñ״�ó
struct UP { bool operator()(int a, int b) { return a > b; } }; // ��������
struct DOWN {int operator()(int a, int b) { return a < b; }}; // �������� 
struct ABS {int operator()(int a, int b) { return abs(a) > abs(b); }}; // ���� ���� �������� 

// Sort �Լ� �����ε� : UP cmp
void Sort(int* x, int n, UP cmp) {
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
            if (cmp(x[i], x[j])) {
                int temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
}

// Sort �Լ� �����ε� : Down cmp
void Sort(int* x, int n, DOWN cmp) {
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
            if (cmp(x[i], x[j])) {
                int temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
}

// Sort �Լ� �����ε� : ABS cmp
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

    Sort(arr, 7, UP()); // �������� 
    for (auto i : arr)  cout << i << " ";
    cout << endl;

    Sort(arr, 7, DOWN()); // ��������
    for (auto i : arr)  cout << i << " ";
    cout << endl;

    Sort(arr, 7, ABS()); // ���� ���� �������� 
    for (auto i : arr)  cout << i << " ";
    cout << endl;
}