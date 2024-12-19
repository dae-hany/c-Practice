#include <iostream> 
#include <list> 

using namespace std;
class Animal {
public:
    virtual void cry() { cout << "Animal!" << endl; }

    // virtual을 사용하지 않는 대신에, protected 파괴자를 사용할 수 있습니다.
protected:
    virtual ~Animal() { cout << "Animal 파괴자" << endl; }
};

class Dog : public Animal {
public:
    ~Dog() { cout << "Dog 파괴자" << endl; }
    virtual void cry() { cout << "Mung Mung!" << endl; }
};

int main() {
    Animal* animalPtr = new Dog;

    animalPtr->cry(); // Mung Mung! 출력 

    // static_cast<> : 합법적인 형변환만 가능
    delete static_cast<Dog*> (animalPtr); // Dog 파괴자 출력 -> Animal 파괴자 출력 
    // virtual을 사용하지 않고 protected에서 파괴자를 호출할 경우 static cast로 형변환 
   
}