#include <iostream>
using namespace std;

class Animal {
public:
	// virtual 이 없는 부모 파괴자 
	~Animal() { cout << "Animal 파괴자" << endl; }
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
	Animal 파괴자만 호출되었음. 
	Dog 클래스 파괴자는 호출되지 않았음. 
	따라서, 메모리 누수가 발생됨. (int arr[1024])
	*/
}