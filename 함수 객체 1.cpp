#include <iostream>
using namespace std;

// �Լ� ��ü ���� 
struct Plus {
	int operator()(int a, int b) {
		return a + b;
	}
};

int main() {
	Plus p; // �Լ� ��ü ���� 
	int result = p(3, 5); // �Լ�ó�� ȣ��, p.operator() 
	cout << "result : " << result << endl;
}