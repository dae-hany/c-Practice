#include <iostream>;
using namespace std;

int main() {
    int mem[] = {
        0xAAAABBBB, 0xCCCCDDDD,
        0xEEEEFFFF, 0x11112222
    };

    unsigned long long* ptr = (unsigned long long*)mem;         // 8 bytes�� ����

    printf("mem : %11X \n", *ptr);                  // CCCCDDDDAAAABBBB ���������, printf�� 8 bytes������ ����ϹǷ�
                                                    // �տ� 8 bytes�� ¥�� => AAAABBBB
    printf("mem : %11X \n", *(ptr + 1));            // ������ ������ EEEEFFFF ��� 
}