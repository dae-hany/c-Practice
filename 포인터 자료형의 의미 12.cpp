#include <iostream>;
using namespace std;

int main() {
    int mem[] = {
        0xAAAABBBB, 0xCCCCDDDD,
        0xEEEEFFFF, 0x11112222
    };

    unsigned long long* ptr = (unsigned long long*)mem;         // 8 bytes씩 읽음

    printf("mem : %11X \n", *ptr);                  // CCCCDDDDAAAABBBB 출력이지만, printf까 8 bytes까지만 출력하므로
                                                    // 앞에 8 bytes를 짜름 => AAAABBBB
    printf("mem : %11X \n", *(ptr + 1));            // 동일한 이유로 EEEEFFFF 출력 
}