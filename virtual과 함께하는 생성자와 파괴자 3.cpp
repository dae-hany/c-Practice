#include <iostream> 
#include <list> 

using namespace std;
class Animal {
public:
    virtual void cry() { cout << "Animal!" << endl; }

    // virtual�� ������� �ʴ� ��ſ�, protected �ı��ڸ� ����� �� �ֽ��ϴ�.
protected:
    virtual ~Animal() { cout << "Animal �ı���" << endl; }
};

class Dog : public Animal {
public:
    ~Dog() { cout << "Dog �ı���" << endl; }
    virtual void cry() { cout << "Mung Mung!" << endl; }
};

int main() {
    Animal* animalPtr = new Dog;

    animalPtr->cry(); // Mung Mung! ��� 

    // static_cast<> : �չ����� ����ȯ�� ����
    delete static_cast<Dog*> (animalPtr); // Dog �ı��� ��� -> Animal �ı��� ��� 
    // virtual�� ������� �ʰ� protected���� �ı��ڸ� ȣ���� ��� static cast�� ����ȯ 
   
}