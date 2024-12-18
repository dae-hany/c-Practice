#include <iostream> 
using namespace std;

class Calc {
private:
    int value;
public:
    void setValue(int value) {
        this->value = value;
    }

    // 반환형 : Calc*
    // 현재 객체에 대한 참조를 반환 
    // 원래 객체에 대해 직접적으로 수정하고 원래 객체를 반환 
    // function chaining 가능 
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

    c.Add(5)->Sub(4)->Mul(3); // 펑션 체이닝 가능 

    c.print(); // 33 출력! 정상적이다!!
}
