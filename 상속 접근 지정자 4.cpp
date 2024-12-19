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
	dog.print(); // print �Լ��� public���� ���ǵǾ����Ƿ� �ܺο��� ���� ���� 

	cout << dog.pri << endl; // private�� ���ο����� ���� ���� => ���� 
	cout << dog.pro << endl; // protected�� ���ο� �ڽĿ����� ���� ���� => ���� 
	cout << dog.pub << endl; // public�� �ܺο��� ���� ���� => ���� 
}