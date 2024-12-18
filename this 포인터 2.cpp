#include <iostream> 
using namespace std;

class Calc {
private:
    int value;
public:
    void setValue(int value) {
        this->value = value; /* this->value는 멤버 변수, value는 매개변수!! this는 포인터니깐 가능*/
    }
    void print() {
        cout << value << endl;
    }
};

int main() {
    Calc c;
    c.setValue(10);
    c.print(); // 10 출력됩니다!!
}
