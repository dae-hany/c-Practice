#include <iostream>
using namespace std;

class Animal {
public:
	void cry() { cout << "���� ���� �Ҹ�" << endl; }
};

class Dog : public Animal {
public:
	void cry() { cout << "�� ���� �Ҹ�" << endl; }
};

// Dog ��ü�� Animal �����ͷ� ��ĳ���� �ϸ�,
// Animal �����ʹ� Dog ��ü�� Animal �κи� ���� 
// �̸� "���� ���ε�" �̶�� ��. 
void makeAnimalCry(Animal* animal) {
	animal->cry();
}

int main() {
	Dog dog;
	makeAnimalCry(&dog); // makeAnimalCry �Լ����� ��ĳ���� �߻� 
					     // "���� ���� �Ҹ�" ��� 

	Animal* animalPtr = new Dog; // �� ĳ���� 
	animalPtr->cry();			 // "���� ���� �Ҹ�" ��� 
}