#include <iostream>
using namespace std;

void* my_memcpy(void* destination, const void* source, size_t num) {
	const char* source_ptr = (char*)source;
	char* destination_ptr = (char*)destination;

	for (size_t i = 0; i < num; i++) {
		destination_ptr[i] = source_ptr[i];
	}

	return destination_ptr;
}

int main(){
	char csrc[] = "Hello!";
	char cdst[16];

	int isrc = 12345678;
	int idst;

	my_memcpy(cdst, csrc, sizeof(csrc));
	my_memcpy(&idst, &isrc, sizeof(isrc));

	cout << cdst << endl;
	cout << idst << endl;
}