#include <iostream> 
using namespace std;

class Calc {
private:
    int value;
public:
    void setValue(int value) {
        this->value = value;
    }

    void Add(int v) { value += v; }
    void Sub(int v) { value -= v; }
    void Mul(int v) { value *= v; }

    void print() {
        cout << value << endl;
    }
};

int main() {
    Calc c;

    c.setValue(10);

    c.Add(5); // 10 + 5 = 15
    c.Sub(4); // 15 - 4 = 11
    c.Mul(3); // 11 * 3 = 33

    c.print(); // 33 Ãâ·Â!
}
