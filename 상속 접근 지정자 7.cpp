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

// private 상속의 의미 : 부모의 public, protected 멤버는 자신만이 사용할거임.
// protected 상속(public => private, protected => private, private => private) 
class MyDog : private Dog {
public:
	MyDog(int a, int b, int c) : Dog(a, b, c) {}
	void qrint() {
		cout << "private : " << pri << endl;   // private은 상속되지 않으므로 자식에서 접근할 수 없음. 
		cout << "protected : " << pro << endl; // protected는 자식에서 접근할 수 있으므로 가능 
		cout << "public : " << pub << endl;    // public은 자식에서 접근할 수 있으므로 가능 
	}
};

class YourDog : public MyDog {
public:
	YourDog(int a, int b, int c) : MyDog(a, b, c) {}
	void rrint() {
		cout << "private : " << pri << endl;  // private은 상속되지 않으므로 자식에서 접근할 수 없음. 
		cout << "protected : " << pro << endl;// private은 상속되지 않으므로 자식에서 접근할 수 없음. 
		cout << "public : " << pub << endl;   // private은 상속되지 않으므로 자식에서 접근할 수 없음. 
	}
};

int main() {
	YourDog dog(1, 2, 3);

	cout << "[main(외부) 에서의 접근]" << endl;
	cout << dog.pri << endl;	     // private은 외부에서 접근 불가능
	cout << dog.pro << endl;		 // private은 외부에서 접근 불가능
	cout << dog.pub << endl << endl; // private은 외부에서 접근 불가능

	cout << "[함수에서의 접근]" << endl;
	dog.print(); // private 상속에 의해 print는 더 이상 public이 아님. => 외부에서 접근 불가능 
	cout << endl;
	dog.qrint(); // public에서 정의된 print => 가능 
	cout << endl;
	dog.rrint(); // public에서 정의된 print => 가능 
}