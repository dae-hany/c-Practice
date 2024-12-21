#include <iostream>;
using namespace std;

struct position {
	int x; // 4 bytes
	int y; // 4 bytes
};

int main() {
	cout << sizeof(position) << endl; // 8 bytes
}