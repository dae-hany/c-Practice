#include <iostream>;
using namespace std;

int main() {
    int mem[] = {
        0xAAAABBBB, 0xCCCCDDDD,
        0xEEEEFFFF, 0x11112222
    };

    unsigned char* ptr = (unsigned char*)mem;       // 1 bytes�� ����

    printf("mem : %11X \n", *ptr);                  // BB ���
    printf("mem : %11X \n", *(ptr + 1));            // BB ��� 
    printf("mem : %11X \n", *(ptr + 2));            // AA ��� 
    printf("mem : %11X \n", *(ptr + 3));            // AA ��� 

    printf("mem : %11X \n", *(ptr + 4));            // DD ��� 
    printf("mem : %11X \n", *(ptr + 5));            // DD ��� 
    printf("mem : %11X \n", *(ptr + 6));            // CC ��� 
    printf("mem : %11X \n", *(ptr + 7));            // CC ��� 
    return 0;
}