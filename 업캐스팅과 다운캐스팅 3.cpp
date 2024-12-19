#include <iostream>
using namespace std;

class Animal {
public:
    void cry() { cout << "동물 울음 소리" << endl; }
};

class Dog : public Animal {
    void cry() { cout << "개 울음 소리" << endl; }
};

void makeAnimalCry(Animal* animal) {
    animal->cry();
}

int main() {
    Animal a;
    Dog d;

    makeAnimalCry(&a); // 동물 울음 소리  출력 
    makeAnimalCry(&d); // 동물 울음 소리  출력 
    /* 
    * Animal 객체이든, Dog 객체이든 "동물 울음 소리"가 출력됨.
    * 어떻게 Animal 객체와 Dog 객체를 구분할 수 있을까? =====> "동적 바인딩!!"
    */
}