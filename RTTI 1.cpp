#include <iostream> 
using namespace std;

class Animal {
public:
	void cry() { cout << "crrrr" << endl; }
};

class Dog : public Animal {
public:
	int color; // 만약, 강아지의 색을 바꾸고 싶다면 어떻게 해야 할까요? 어떻게 강아지를 구분할 수 있을까요?
};

void foo(Animal* p) {
	p->cry();
}

int main() {
	Animal a; foo(&a);
	Dog d; foo(&d);
}