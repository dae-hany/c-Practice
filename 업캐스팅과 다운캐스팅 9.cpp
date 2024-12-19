// �߻� Ŭ���� : ���� ���� �Լ�(virtual)�� �ϳ��� ������ �ִ� Ŭ���� 
// ���� ���� �Լ� : �θ� Ŭ�������� interface�� ����, ������ �ڽ� Ŭ�������� 

#include <iostream>
using namespace std;

// �߻� Ŭ���� : �������̽��� ���� 
class Animal {
public:
	virtual void eat() {}	// virtual void eat() = 0; 
	virtual void cry() {}	// virtual void cry() = 0;
	virtual void sleep() {} // virtual void sleep() = 0;
};

// �ڽ� Ŭ�������� interface�� ���� 
class Dog : public Animal {
public:
	virtual void eat() { cout << "�ȳȳ�" << endl; }
	virtual void cry() { cout << "������" << endl; }
	virtual void sleep() { cout << "������" << endl; }
};

// �ڽ� Ŭ�������� interface�� ���� 
class Cat : public Animal {
public:
	virtual void eat() { cout << "�����" << endl; }
	virtual void cry() { cout << "�Ŀ���" << endl; }
	virtual void sleep() { cout << "��ȳ�" << endl; }
};

void frameworkMain(Animal* a) {
	a->eat();
	a->cry();
	a->sleep();
}

int main() {
	Dog d; Cat c;
	frameworkMain(&d); 
	frameworkMain(&c);
}