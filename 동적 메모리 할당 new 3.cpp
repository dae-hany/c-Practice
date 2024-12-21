#include <iostream>;
using namespace std;

int* func() {
    int* num = new int[4]; // 동적 메모리를 할당했다면
    delete num;            // 추후 delete로 힙 메모리 영역을 해제해주어야 합니다. 
    num = new int[8];

    num[0] = 1;
    num[1] = 2;
    num[2] = 4;
    num[3] = 4;

    return num;
}

int main() {
    int* ptr;
    ptr = func();

    cout << hex;
    cout << "&ptr : " << &ptr << endl;              // ptr 자체 주소 
    cout << "ptr : " << ptr << endl;                // ptr이 가리키는 주소 -> 힙 영역 메모리 
    cout << "*ptr : " << *ptr << endl;              // 1 출력 
    cout << "*(ptr + 1) : " << *(ptr + 1) << endl;  // 2 출력 
}