#include <iostream>;
using namespace std;

int main() {
    int mem[] = {
        0xAAAABBBB, 0xCCCCDDDD,
        0xEEEEFFFF, 0x11112222
    };

    unsigned int* ptr = (unsigned int*)mem;         // 4 bytes�� ����

    printf("mem : %11X \n", *ptr);                  // AAAABBBB ���
    printf("mem : %11X \n", *(ptr + 1));            // CCCCDDDD ��� 
    printf("mem : %11X \n", *(ptr + 2));            // FFFFEEEE ��� 
    printf("mem : %11X \n", *(ptr + 3));            // 11112222 ��� 
}