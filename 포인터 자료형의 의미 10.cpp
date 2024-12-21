#include <iostream>;
using namespace std;

int main() {
    int mem[] = {
        0xAAAABBBB, 0xCCCCDDDD,
        0xEEEEFFFF, 0x11112222
    };

    unsigned char* ptr = (unsigned char*)mem;       // 1 bytes씩 읽음

    printf("mem : %11X \n", *ptr);                  // BB 출력
    printf("mem : %11X \n", *(ptr + 1));            // BB 출력 
    printf("mem : %11X \n", *(ptr + 2));            // AA 출력 
    printf("mem : %11X \n", *(ptr + 3));            // AA 출력 

    printf("mem : %11X \n", *(ptr + 4));            // DD 출력 
    printf("mem : %11X \n", *(ptr + 5));            // DD 출력 
    printf("mem : %11X \n", *(ptr + 6));            // CC 출력 
    printf("mem : %11X \n", *(ptr + 7));            // CC 출력 
    return 0;
}