#include <iostream>
using namespace std;

class Animal {
public:
	// virtual �� ���� �θ� �ı��� 
	~Animal() { cout << "Animal �ı���" << endl; }
	virtual void cry() { cout << "Animal!" << endl; }
};

class Dog : public Animal {
public:
	int arr[1024]; // Dog���� ���� ��� ���� 
	~Dog() { cout << "Dog �ı���" << endl; }
	virtual void cry() { cout << "Dog!" << endl; }
};

int main() {
	Animal* animalPtr = new Dog; // �� ĳ���� 
	animalPtr->cry(); // Dog! ��µ� 
	delete animalPtr; // animalPtr�� �Ҵ�� �� �޸� ���� 

	/*
	Animal �ı��ڸ� ȣ��Ǿ���. 
	Dog Ŭ���� �ı��ڴ� ȣ����� �ʾ���. 
	����, �޸� ������ �߻���. (int arr[1024])
	*/
}