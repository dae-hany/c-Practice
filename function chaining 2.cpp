#include <iostream> 
using namespace std;

class Calc {
private:
    int value;
public:
    void setValue(int value) {
        this->value = value;
    }

    // �Լ��� ��ȯ���� void�̹Ƿ� funciton chaining �Ұ���
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

    c.Add(5).Sub(4).Mul(3); // ����!! can't function chaining

    c.print();
}
