#include <iostream>
using namespace std;

class Animal {
public:
    void cry() { cout << "���� ���� �Ҹ�" << endl; }
};

class Dog : public Animal {
    void cry() { cout << "�� ���� �Ҹ�" << endl; }
};

void makeAnimalCry(Animal* animal) {
    animal->cry();
}

int main() {
    Animal a;
    Dog d;

    makeAnimalCry(&a); // ���� ���� �Ҹ�  ��� 
    makeAnimalCry(&d); // ���� ���� �Ҹ�  ��� 
    /* 
    * Animal ��ü�̵�, Dog ��ü�̵� "���� ���� �Ҹ�"�� ��µ�.
    * ��� Animal ��ü�� Dog ��ü�� ������ �� ������? =====> "���� ���ε�!!"
    */
}