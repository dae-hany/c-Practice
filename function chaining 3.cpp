#include <iostream> 
using namespace std;

class Calc {
private:
    int value;
public:
    void setValue(int value) {
        this->value = value;
    }

    // ��ȯ�� : Calc
    // �Լ��� ȣ��� ������ ���ο� Calc ��ü�� �����ǰ� ��ȯ��
    // return *this �� ��ü this�� �����Ͽ� ��ȯ�ϴ� ���� 
    // function chaining �Ұ���
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

    c.Add(5).Sub(4).Mul(3); // ��� ü�̴� �Ұ���

    c.print(); // 15 ���! Add(5)�� �۵���.

    c.setValue(10); 

    c = c.Add(5).Sub(4).Mul(3);  // ��ü�� �����ؾ� ��� ü�̴� ���� 

    c.print();

    /*
    ��� ü�̴��� �����ϰ� �Ϸ��� c = c.Add(5).Sub(4).Mul(3); �ؾ���.
    ����� ��ü�� �����ؾ� �ϱ� ������
    */
}