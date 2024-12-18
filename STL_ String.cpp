#include <iostream>
using namespace std;

// string�� Standard Template Library ��. 
int main() {
	// 1. C ��Ÿ�� �ʱ�ȭ 
	string one("lottery winner!");
	cout << one << endl;

	// 2. ���ڸ� n�� �ݺ��Ͽ� ���ڿ� �����
	string two(20, '$');
	cout << two << endl;

	// 3. string ��ü������ ���� 
	string three(one);
	cout << three << endl;

	// 4. string ������ + ���� : ���ڿ� �̾���̱�
	one += "Oops!";
	cout << one << endl;

	// 5. ���ڿ� ���� 
	two = "Sorry! That was ";
	three[0] = 'P';

	// 
	string four = two + three;
	cout << four << endl;

	// 6. C ��Ÿ�� ���ڿ� �迭 
	char alls[] = "All's well that ends well";
	string five(alls, 5); // alls �迭�� 5�� ���ڸ� ��� 
	cout << five << endl;

	// 7. ���ڿ� �ε��� �����Ͽ� ���� - ver 1
	string six(alls + 6, alls + 10); // �ε��� 6 �̻� 10 �̸�
	cout << six << endl;

	// 8. ���ڿ� �ε��� �����Ͽ� ���� - ver 2 
	string seven(&alls[6], &alls[10]);
	cout << seven << endl;

	// 9. �ٸ� ���ڿ��� Ư�� �κ� ���� 
	string eight(four, 7, 16);
	cout << eight << endl;
}