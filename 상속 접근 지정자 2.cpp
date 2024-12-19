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

class MyDog : public Dog { // public 상속 (public => public, protected => protected, private => private) 
private:
	int my_age;
public:
	MyDog(int age) : Dog(age), my_age(age) {}
	int get_my() { return dog_age; } // dog_age는 부모의 private에서 정의되었으므로 자식 클래스에서 사용 불가능
};

int main() {
	MyDog dog(5);

	cout << dog.get_dog() << endl;
	cout << dog.get_my() << endl; // 에러 
}