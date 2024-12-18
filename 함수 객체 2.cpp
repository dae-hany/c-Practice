#include <iostream>
using namespace std;

class PiggyBox {
	int total;
public:
	PiggyBox(int init = 0) : total(init) {}
	int operator() (int money) {
		total += money;
		return total;
	}
};

int main() {
	PiggyBox pig;
	cout << "money(100) : " << pig(100) << endl;
	cout << "money(500) : " << pig(500) << endl;
	cout << "money(2000) : " << pig(2000) << endl;
}