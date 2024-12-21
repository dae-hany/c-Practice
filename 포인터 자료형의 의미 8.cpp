#include <iostream>;
using namespace std;

int main() {
    unsigned char mem[] = {
        0x11, 0x22, 0x33, 0x44,
        0x55, 0x66, 0x77, 0x88,
        0x99, 0xAA, 0xBB, 0xCC
    };

    short* ptr = (short*)(mem + 1);             // mem �ּҿ� 1 bytes ������ �ּҸ� ����Ŵ. �׸��� 2 bytes�� ����.

    printf("mem : %11X \n", mem[2]);            // 33 ��� 
    printf("mem : %11X \n", *(mem + 2));        // 33 ��� 

    printf("mem : %11X \n", *ptr);              // 3322 ��� 
    printf("mem : %11X \n", ptr[0]);            // 3322 ��� 

    printf("mem : %11X \n", *(ptr + 2));        // 7766 ��� 
    printf("mem : %11X \n", ptr[2]);            // 7766 ��� 
}