#include <iostream>;
using namespace std;

int main() {
	unsigned char mem[] = { 0x11, 0x22, 0x33, 0x44,
							0x55, 0x66, 0x77, 0x88,
							0x99, 0xAA, 0xBB, 0xCC,
							0xDD, 0xEE, 0xFF, 0x00 };

	unsigned char* ptr = mem;						// 1 byte 씩 읽음
	short* qtr = (short*)mem;						// 2 bytes 씩 읽음
	int* rtr = (int*)mem;							// 4 bytes 씩 읽음
	long long* str = (long long*)mem;				// 8 bytes 씩 읽음 

	// mem 주소 출력 
	printf(" %llX \n", mem);
	printf(" %llX \n", ptr);
	printf(" %llX \n", &ptr);

	printf(" %llX \n", *(ptr + 2));					// 33 출력
	printf(" %llX \n", *(qtr + 2));					// 6655 출력
	printf(" %llX \n", *(rtr + 2));					// CCBBAA99 출력
	printf(" %llX \n", *str);						// 8877665544332211 출력 

	printf(" %llX \n", *(mem + 2));					// 33 출력 
	printf(" %llX \n", ptr[2]);						// 33 출력 
}