#include <iostream> 
using namespace std;

class A {
	char* ptr;  // ���� �޸𸮸� �Ҵ� ���� ������
	int size;   // ���ڿ� ũ�� ����
public:
	A() {}; // �⺻ ������

	// �Ķ����ȭ�� ������: ���ڿ��� ũ�⸦ �޾Ƽ� ���� �޸𸮸� �Ҵ� 
	A(const char* str, int size) {
		ptr = new char[size];     // ���� �޸� �Ҵ�
		this->size = size;        // ũ�� ����
		memcpy(ptr, str, size);   // �־��� ���ڿ��� ptr�� ����
	}

	// ���� ������: ��ü�� ������ �� ȣ��
	A(const A& a) {
		cout << "copy: " << a.ptr << endl; // ����� ��ü�� ptr�� ���
		ptr = new char[a.size];          // ���� ���� �޸� �Ҵ�
		memcpy(ptr, a.ptr, a.size);      // ���� ��ü�� �޸𸮸� ����
	}

	~A() { delete ptr; } // �Ҹ���: �޸� ����
};

template<typename T> void mycpy(T* dst, T* src, int sz) {
	// ���� �����ڰ� �ڸ����� ���� ��� Ȯ�� => is_trivially_copy_constructible
	if (!is_trivially_copy_constructible<T>::value) {
		cout << "���� �����ڰ� �ڸ����� ����" << endl;
		while (sz--) {
			new (dst) T(*src); // ���� �����ڸ� �ǵ������� ȣ�� 
			++dst, ++src;
		}
	}
	// �ڸ��� ��� 
	else {
		cout << "���� �����ڰ� �ڸ���" << endl;
 		memcpy(dst, src, sizeof(T) * sz); // �޸𸮸� �״�� ����  } 
	}
}

int main() {
	A a("hello", 6);
	A b;
	mycpy(&b, &a, 1);
}