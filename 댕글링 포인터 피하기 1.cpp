#include <iostream>;
using namespace std;

// 1. ���� �޸𸮸� ���� ���� �����ͷ� ����Ű�� ���ô�. 
int main() {
	int* ptr = new int;   // ���� �޸� �Ҵ�
	int* qtr = ptr;		  // ������ ���� �޸𸮸� ����Ű�� ������ 

	*ptr = 10;
	cout << *ptr << endl;	// 10 ��� 
	cout << *qtr << endl;	// 10 ��� 

	delete ptr; // ���� �޸𸮰� �����Ǿ��� ������, ptr �Ӹ� �ƴ϶� qtr�� ��ȿ���� ���� �޸𸮸� �����ϰ� ��. 

	cout << *ptr << endl; // ������ �� 
	cout << *qtr << endl; // ������ �� 
}