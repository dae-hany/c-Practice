#include <iostream> 
using namespace std;

class Calc {
private:
    int value;
public:
    void setValue(int value) {
        this->value = value;
    }

    // ��ȯ�� : Calc*
    // ���� ��ü�� ���� ������ ��ȯ 
    // ���� ��ü�� ���� ���������� �����ϰ� ���� ��ü�� ��ȯ 
    // function chaining ���� 
    Calc* Add(int v) { value += v; return this; }
    Calc* Sub(int v) { value -= v; return this; }
    Calc* Mul(int v) { value *= v; return this; }

    void print() {
        cout << value << endl;
    }
};

int main() {
    Calc c;

    c.setValue(10);

    c.Add(5)->Sub(4)->Mul(3); // ��� ü�̴� ���� 

    c.print(); // 33 ���! �������̴�!!
}
