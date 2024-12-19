#include <iostream>
using namespace std;

class Animal {
public:
	void cry() { cout << "동물 울음 소리" << endl; }
};

class Dog : public Animal {
public:
	void cry() { cout << "개 울음 소리" << endl; }
};

// Dog 객체를 Animal 포인터로 업캐스팅 하면,
// Animal 포인터는 Dog 객체의 Animal 부분만 참조 
// 이를 "정적 바인딩" 이라고 함. 
void makeAnimalCry(Animal* animal) {
	animal->cry();
}

int main() {
	Dog dog;
	makeAnimalCry(&dog); // makeAnimalCry 함수에서 업캐스팅 발생 
					     // "동물 울음 소리" 출력 

	Animal* animalPtr = new Dog; // 업 캐스팅 
	animalPtr->cry();			 // "동물 울음 소리" 출력 
}