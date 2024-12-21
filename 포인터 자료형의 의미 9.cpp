#include <iostream>;
using namespace std;

int main() {
    unsigned char mem[] = {
        0x11, 0x22, 0x33, 0x44,
        0x55, 0x66, 0x77, 0x88,
        0x99, 0xAA, 0xBB, 0xCC
    };

    short* ptr = (short*)mem + 1;               // 2 bytes 씩 읽는 포인터에 1을 더함 => 주소 + 2 bytes 

    printf("mem : %11X \n", mem[2]);            // 33 출력 
    printf("mem : %11X \n", *(mem + 2));        // 33 출력 

    printf("mem : %11X \n", *ptr);              // 4433 출력 
    printf("mem : %11X \n", ptr[0]);            // 4433 출력 

    printf("mem : %11X \n", *(ptr + 2));        // 8877 출력 
    printf("mem : %11X \n", ptr[2]);            // 8877 출력 
}