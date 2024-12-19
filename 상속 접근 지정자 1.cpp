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
	int get_my() { return my_age; } // my_age는 MyDog 내부에서 사용 가능 
};

int main() {
	MyDog dog(5);

	cout << dog.get_dog() << endl; // 15 출력 (public 상속이므로 부모의 public이 자식의 public이므로 사용 가능)
	cout << dog.get_my() << endl; // 5 출력 (get_my() 함수는 public에서 정의된 함수이므로 사용 가능) 
}