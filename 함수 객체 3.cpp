#include <iostream>
using namespace std;

struct Plus {
	int operator()(int a, int b) {
		return a + b;
	}
};

struct PPlus {
	int operator()(int a, int b) {
		return a + b;
	}
};

int main() {
	Plus p; 
	Plus pp;

	int n = p(1, 2);
	int nn = pp(1, 2);

	cout << n << endl;
	cout << nn << endl;
}