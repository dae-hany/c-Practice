#include <iostream>
using namespace std;

class Animal {
public:
	// virtual 이 있는 부모 파괴자 => 메모리 누수 방지 
	virtual ~Animal() { cout << "Animal 파괴자" << endl; }
	virtual void cry() { cout << "Animal!" << endl; }
};

class Dog : public Animal {
public:
	int arr[1024]; // Dog만이 갖는 멤버 변수 
	~Dog() { cout << "Dog 파괴자" << endl; }
	virtual void cry() { cout << "Dog!" << endl; }
};

int main() {
	Animal* animalPtr = new Dog; // 업 캐스팅 
	animalPtr->cry(); // Dog! 출력됨 
	delete animalPtr; // animalPtr에 할당된 힙 메모리 해제 

	/*
	"모든 부모의 파괴자는 가상 파괴자여야 합니다"
	*/
}