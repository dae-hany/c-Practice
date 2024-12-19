#include <iostream>
using namespace std;

class Animal {
public:
    // virtual => ���� �Լ� ���� => ���� ���ε� 
    virtual void cry() { cout << "���� ���� �Ҹ�" << endl; }
};

class Dog : public Animal {
    // virtual => ���� �Լ� ���� => ���� ���ε� 
    virtual void cry() { cout << "�� ���� �Ҹ�" << endl; }
};

void makeAnimalCry(Animal* animal) {
    animal->cry();
}

int main() {
    Animal a;
    Dog d;

    makeAnimalCry(&a); // ���� ���� �Ҹ� ��� 
    makeAnimalCry(&d); // �� ���� �Ҹ� ���
    // virtual Ű����� ���� ���� ���ε��� ���������� 
    // Animal ��ü�� Dog ��ü�� ������ �� �ְ� �ȴ�. 
}