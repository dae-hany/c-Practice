#include <iostream> 
using namespace std;

class klass {
private:
	int a = 0x41424344;
public:
	klass() { cout << "������!" << endl; }

	void foo() { cout << "fooo!" << endl; }
};

int main() {
	char reverse[1024] = "hello"; // �̹� �����ϴ� �޸� ��� 
	cout << reverse << endl; // hello ��� 
	cout << sizeof("hello") << endl;

	// placement new : reverse �迭�� ���� �ּҸ� �޸� ������� �����Ͽ� ��ü ���� 
	klass* ptr = new (reverse) klass;

	cout << (void*)reverse << endl; // (void *) ĳ�������� reverse �迭�� ���� �ּ� ��� 
	cout << ptr << endl; // ptr �������� �� ��� (reverse �迭�� ���� �ּҿ� ����)

	cout << reverse << endl; // �̻��� ���ڿ� ��� 
}