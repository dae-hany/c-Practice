#include <iostream>
using namespace std;

class Dog {
public:
	void bark() { cout << "mung!" << endl; }
};

class MyDog : Dog {
public:
	void bark() { cout << "wall!" << endl; }
	void bark(bool feed) { cout << "krr akkaka" << endl; }
};

int main() {
	MyDog dog;
	dog.bark(); // 오버로딩 -> 동일한 함수를 인자로 구별
	dog.bark(true); // 오버로딩 -> 동일한 함수를 인자로 구별
}