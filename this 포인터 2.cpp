#include <iostream> 
using namespace std;

class Calc {
private:
    int value;
public:
    void setValue(int value) {
        this->value = value; /* this->value�� ��� ����, value�� �Ű�����!! this�� �����ʹϱ� ����*/
    }
    void print() {
        cout << value << endl;
    }
};

int main() {
    Calc c;
    c.setValue(10);
    c.print(); // 10 ��µ˴ϴ�!!
}
