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
	// ����ü ������ ����� ���ÿ� �ʱ�ȭ�� �� ����. �̰� ������. 
	const idcard id = { 1234, "�ִ���", 4.0, 123 };
}