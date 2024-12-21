#include <iostream>;
using namespace std;

int main() {
    unsigned char mem[] = {
        0x11, 0x22, 0x33, 0x44, 
        0x55, 0x66, 0x77, 0x88, 
        0x99, 0xAA, 0xBB, 0xCC
    };

    int* ptr = (int*)mem; // 4 bytes �� ����

    printf("mem : %11X \n", mem[2]);            // 33 ��� 
    printf("mem : %11X \n", *(mem + 2));        // 33 ��� 

    printf("mem : %11X \n", *ptr);              // 44332211 ��� 
    printf("mem : %11X \n", ptr[0]);            // 44332211 ��� 

    printf("mem : %11X \n", *(ptr + 2));        // CCBBAA99 ��� 
    printf("mem : %11X \n", ptr[2]);            // CCBBAA99 ��� 
}