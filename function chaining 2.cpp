#include <iostream> 
using namespace std;

class Calc {
private:
    int value;
public:
    void setValue(int value) {
        this->value = value;
    }

    // 함수의 반환형이 void이므로 funciton chaining 불가능
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

    c.Add(5).Sub(4).Mul(3); // 에러!! can't function chaining

    c.print();
}
