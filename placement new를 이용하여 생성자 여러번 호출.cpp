#include <iostream> 
using namespace std;

class klass {
private:
	int a = 0x41424344;
public:
	klass() { cout << "������!" << endl; }

	void foo() { cout << "fooo!" << endl; }

	~klass() { cout << "�ı���!" << endl; }
};

int main() {
	klass k;

	// �ı��ڴ� ���� �� ȣ���� �� �־��!
	k.~klass();
	k.~klass();
	k.~klass();

	// �����ڴ� ���Ƿ� ȣ���� �� �����!
	// k.klass(); �Ұ��� 

	// placement new -> �����ڸ� ���� ȣ���� �� �־��!
	new (&k) klass;
	new (&k) klass;
	new (&k) klass;
}