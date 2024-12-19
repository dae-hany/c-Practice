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

int main() {
	Dog dog(1, 2, 3);
	dog.print(); // print 함수는 public에서 정의되었으므로 외부에서 접근 가능 

	cout << dog.pri << endl; // private은 내부에서만 접근 가능 => 에러 
	cout << dog.pro << endl; // protected는 내부와 자식에서만 접근 가능 => 에러 
	cout << dog.pub << endl; // public은 외부에서 접근 가능 => 가능 
}