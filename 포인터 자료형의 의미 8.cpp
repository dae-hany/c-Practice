#include <iostream>;
using namespace std;

int main() {
    unsigned char mem[] = {
        0x11, 0x22, 0x33, 0x44,
        0x55, 0x66, 0x77, 0x88,
        0x99, 0xAA, 0xBB, 0xCC
    };

    short* ptr = (short*)(mem + 1);             // mem 주소에 1 bytes 증가한 주소를 가리킴. 그리고 2 bytes씩 읽음.

    printf("mem : %11X \n", mem[2]);            // 33 출력 
    printf("mem : %11X \n", *(mem + 2));        // 33 출력 

    printf("mem : %11X \n", *ptr);              // 3322 출력 
    printf("mem : %11X \n", ptr[0]);            // 3322 출력 

    printf("mem : %11X \n", *(ptr + 2));        // 7766 출력 
    printf("mem : %11X \n", ptr[2]);            // 7766 출력 
}