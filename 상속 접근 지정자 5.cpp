#include <iostream>
using namespace std;

class Dog {
private:
	int pri;
protected:
	int pro;
public:
	int pub;
	Dog(int a, int b, int c) : pri(a), pro(b), pub(c) {}
	void print() {
		cout << "private : " << pri << endl;
		cout << "protected : " << pro << endl;
		cout << "public : " << pub << endl;
	}
};

// public 상속 (public => public , protected => protected, private => private) 
class MyDog : public Dog {
public:
	MyDog(int a, int b, int c) : Dog(a, b, c) {}
	void qrint() {
		cout << "private : " << pri << endl; // private은 상속되지 않으므로 자식에서 접근할 수 없음. 
		cout << "protected : " << pro << endl; // protected는 자식에서 접근할 수 있으므로 가능 
		cout << "public : " << pub << endl; // public은 자식에서 접근할 수 있으므로 가능 
	}
};

class YourDog : public MyDog {
public:
	YourDog(int a, int b, int c) : MyDog(a, b, c) {}
	void rrint() {
		cout << "private : " << pri << endl; // private은 상속되지 않으므로 자식에서 접근할 수 없음. 
		cout << "protected : " << pro << endl; // protected는 자식에서 접근할 수 있으므로 가능 
		cout << "public : " << pub << endl; // public은 외부에서 접근할 수 있으므로 가능 
	}
};

int main() {
	YourDog dog(1, 2, 3);

	cout << "[main(외부) 에서의 접근]" << endl;
	cout << dog.pri << endl; // private은 외부에서 접근 불가능
	cout << dog.pro << endl; // protected는 외부에서 접근 불가능
	cout << dog.pub << endl << endl; // public은 외부에서 접근 가능   

	cout << "[함수에서의 접근]" << endl;
	dog.print(); // public에서 정의된 print => 가능
	cout << endl;
	dog.qrint(); // public에서 정의된 print => 가능 
	cout << endl;
	dog.rrint(); // public에서 정의된 print => 가능 
}