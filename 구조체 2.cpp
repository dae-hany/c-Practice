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
	const idcard id; // ����ü ������ const�� �Ҵ��� ���

	// ����ü�� ��� ������ ���� �ʱ�ȭ�ϴ� ���� �Ұ�����. 
	id.id = 1234;
	id.name = "�ִ���";
	id.score = 4.0;
	id.department = 123;
}