#include <iostream>;
using namespace std;

struct position {
	short x; // 2 bytes
	int y;   // 4 bytes
};

int main() {
	cout << sizeof(position) << endl; // 6 bytes �� �� �˾Ҵµ� �� 8 bytes�� ��µǴ°�? => padding!!
}

/*
[padding �̶�?]
����ü�� ũ��� "�⺻ �ڷ����� �߿���" ���� ū �ڷ����� ������� ��. 
�е� => �޸𸮸� ȿ�������� �����ϱ� ���� ����ü�� ũ�⸦ �����ϴ� ��. 
*/