#include <iostream>
using namespace std;

class Dog {
	string howl;
public:
	void cry() { cout << howl << endl; }
	void eat() { cout << "Feed Feed Feed!" << endl; }
	void run() { cout << "Run Run Run!" << endl; }
	Dog(const string& sound) : howl(sound) {}
	void mung() { cout << "Dog dog dog" << endl; }
};
class Cat {
	string howl;
public:
	void cry() { cout << howl << endl; }
	void eat() { cout << "Feed Feed Feed!" << endl; }
	void run() { cout << "Run Run Run!" << endl; }
	Cat(const string& sound) : howl(sound) {}
	void nyang() { cout << "Cat cat cat" << endl; }
};
class Cow {
	string howl;
public:
	void cry() { cout << howl << endl; }
	void eat() { cout << "Feed feed feed!" << endl; }
	void run() { cout << "Run run run! " << endl; }
	Cow(const string& sound) :howl(sound) {}
	void Umme() { cout << "Cow cow cow" << endl; }
};

int main() {
	Dog d("mung mung");
	Cat c("nyang nyang");
	Cow w("Ummmm");

	d.cry();
	c.cry();
	w.cry();
}