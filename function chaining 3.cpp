#include <iostream> 
using namespace std;

class Calc {
private:
    int value;
public:
    void setValue(int value) {
        this->value = value;
    }

    // 반환형 : Calc
    // 함수가 호출될 때마다 새로운 Calc 객체가 생성되고 반환됨
    // return *this 는 객체 this를 복사하여 반환하는 것임 
    // function chaining 불가능
    Calc Add(int v) { value += v; return *this; }
    Calc Sub(int v) { value -= v; return *this; }
    Calc Mul(int v) { value *= v; return *this; }

    void print() {
        cout << value << endl;
    }
};

int main() {
    Calc c;

    c.setValue(10);

    c.Add(5).Sub(4).Mul(3); // 펑션 체이닝 불가능

    c.print(); // 15 출력! Add(5)만 작동함.

    c.setValue(10); 

    c = c.Add(5).Sub(4).Mul(3);  // 객체를 저장해야 펑션 체이닝 가능 

    c.print();

    /*
    펑션 체이닝이 가능하게 하려면 c = c.Add(5).Sub(4).Mul(3); 해야함.
    복사된 객체를 저장해야 하기 때문에
    */
}