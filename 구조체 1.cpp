#include <iostream>
using namespace std;

// ����ü ����
// struct + ����ü �̸� 
struct idcard {
	int id;			
	string name;
	double score;
	int department;
};

int main() {
	idcard id; 

	// ����ü�� ��� ������ �ʱ�ȭ �ϴ� ��� 1
	id.id = 1234;
	id.name = "�ִ���";
	id.score = 4.0;
	id.department = 123;
}