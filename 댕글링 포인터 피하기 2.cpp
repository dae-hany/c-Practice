#include <iostream>;
using namespace std;

// delete ����, ������ ���� �޸𸮸� ����Ű�� �����͸� 0 Ȥ�� nullptr�� �ʱ�ȭ�սô�.
int main() {
	int* ptr = new int;
	int* qtr = ptr;

	*ptr = 10;
	cout << *ptr << endl;  // 10 ��� 
	cout << *qtr << endl;  // 10 ��� 

	delete ptr; // �� �޸� ������ ���� �ϰ� 
	ptr = 0; // 0 Ȥ�� nullptr�� �ʱ�ȭ  
	qtr = 0; // 0 Ȥ�� nullptr�� �ʱ�ȭ 

	cout << *ptr << endl; 
	cout << *qtr << endl;
}