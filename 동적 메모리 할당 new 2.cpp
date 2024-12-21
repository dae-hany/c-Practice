#include <iostream>;
using namespace std;

int* func() {
    int* num = new int[4];
    num[0] = 1;
    num[1] = 2;
    num[2] = 4;
    num[3] = 4;

    int mum[4] = { 1,2,3,4 };

    cout << "num : " << num << endl;        // 힙 영역 메모리 주소 
    cout << "&num : " << &num << endl;      // 포인터 자체 주소(스택)

    cout << "mum : " << mum << endl;        // 배열의 첫 번째 원소의 주소(스택)
    cout << "&mum : " << &mum << endl;      // 배열의 첫 번째 원소의 주소(스택)
    return num;
}

int main() {
    int* ptr;
    ptr = func();
}