#include <iostream>;
using namespace std;

struct myarray {
    int x[32];
};

// 구조체를 반환하는 함수, 배열과 다르게 온전히 반환된다
myarray func() {
    myarray arr = { 1,2,3,4 };
    return arr;
}

int main() {
    myarray ret = func();

    // 출력 : 1 2 3 4
    cout << ret.x[0] << "\n" << ret.x[1] << endl;
    cout << ret.x[2] << "\n" << ret.x[3] << endl;
    return 0;
}