#include <iostream>
using namespace std;

class Animal {
public:
    // virtual => 가상 함수 선언 => 동적 바인딩 
    virtual void cry() { cout << "동물 울음 소리" << endl; }
};

class Dog : public Animal {
    // virtual => 가상 함수 선언 => 동적 바인딩 
    virtual void cry() { cout << "개 울음 소리" << endl; }
};

void makeAnimalCry(Animal* animal) {
    animal->cry();
}

int main() {
    Animal a;
    Dog d;

    makeAnimalCry(&a); // 동물 울음 소리 출력 
    makeAnimalCry(&d); // 개 울음 소리 출력
    // virtual 키워드로 인해 동적 바인딩이 가능해지고 
    // Animal 객체와 Dog 객체를 구분할 수 있게 된다. 
}