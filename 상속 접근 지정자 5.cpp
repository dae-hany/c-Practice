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

// public ��� (public => public , protected => protected, private => private) 
class MyDog : public Dog {
public:
	MyDog(int a, int b, int c) : Dog(a, b, c) {}
	void qrint() {
		cout << "private : " << pri << endl; // private�� ��ӵ��� �����Ƿ� �ڽĿ��� ������ �� ����. 
		cout << "protected : " << pro << endl; // protected�� �ڽĿ��� ������ �� �����Ƿ� ���� 
		cout << "public : " << pub << endl; // public�� �ڽĿ��� ������ �� �����Ƿ� ���� 
	}
};

class YourDog : public MyDog {
public:
	YourDog(int a, int b, int c) : MyDog(a, b, c) {}
	void rrint() {
		cout << "private : " << pri << endl; // private�� ��ӵ��� �����Ƿ� �ڽĿ��� ������ �� ����. 
		cout << "protected : " << pro << endl; // protected�� �ڽĿ��� ������ �� �����Ƿ� ���� 
		cout << "public : " << pub << endl; // public�� �ܺο��� ������ �� �����Ƿ� ���� 
	}
};

int main() {
	YourDog dog(1, 2, 3);

	cout << "[main(�ܺ�) ������ ����]" << endl;
	cout << dog.pri << endl; // private�� �ܺο��� ���� �Ұ���
	cout << dog.pro << endl; // protected�� �ܺο��� ���� �Ұ���
	cout << dog.pub << endl << endl; // public�� �ܺο��� ���� ����   

	cout << "[�Լ������� ����]" << endl;
	dog.print(); // public���� ���ǵ� print => ����
	cout << endl;
	dog.qrint(); // public���� ���ǵ� print => ���� 
	cout << endl;
	dog.rrint(); // public���� ���ǵ� print => ���� 
}