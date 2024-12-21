#include <iostream>;
using namespace std;

void func(int* num) {
    cout << num << endl;   // 배열의 첫 번째 원소의 주소 출력 
    cout << *num << endl;  // 배열의 첫 번째 원소 출력 
}

int main() {
    int num[] = { 10, 20, 30, 40 };
    func(num);
}