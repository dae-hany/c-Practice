#include <iostream>
using namespace std;

class AAA {
	int a; // 4 bytes 
	int b; // 4 bytes 
};
class BBB : public AAA {
	int c; // 4 bytes 
	int d; // 4 bytes 
};

int main() {
	cout << sizeof(AAA) << endl; // 8 bytes
	cout << sizeof(BBB) << endl; // 16 bytes 
}