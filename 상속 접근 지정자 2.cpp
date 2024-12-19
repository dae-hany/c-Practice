#include <iostream>
using namespace std;

class Dog {
private:
	int dog_age;
public:
	Dog() {}
	Dog(int age) : dog_age(age + 10) {}
	int get_dog() { return dog_age; }
};

class MyDog : public Dog { // public ��� (public => public, protected => protected, private => private) 
private:
	int my_age;
public:
	MyDog(int age) : Dog(age), my_age(age) {}
	int get_my() { return dog_age; } // dog_age�� �θ��� private���� ���ǵǾ����Ƿ� �ڽ� Ŭ�������� ��� �Ұ���
};

int main() {
	MyDog dog(5);

	cout << dog.get_dog() << endl;
	cout << dog.get_my() << endl; // ���� 
}