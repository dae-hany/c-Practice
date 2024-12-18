#include <iostream> 
#include <cmath> 
using namespace std;

template <typename T>
void Sort(int* x, int n, T cmp) {
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

    // ���� ǥ������ ����Ͽ� �� ���� ���� �����ϱ�!!

    Sort(arr, 7, [](int a, int b) {return a > b; }); // �������� 
    for (auto i : arr)  cout << i << " ";
    cout << endl;

    Sort(arr, 7, [](int a, int b) {return b > a; }); // ��������
    for (auto i : arr)  cout << i << " ";
    cout << endl;

    Sort(arr, 7, [](int a, int b) {return abs(a) > abs(b); }); // ���� ���� �������� 
    for (auto i : arr)  cout << i << " ";
    cout << endl;
}