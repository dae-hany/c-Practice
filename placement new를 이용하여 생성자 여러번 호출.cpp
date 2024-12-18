#include <iostream> 
using namespace std;

class klass {
private:
	int a = 0x41424344;
public:
	klass() { cout << "생성자!" << endl; }

	void foo() { cout << "fooo!" << endl; }

	~klass() { cout << "파괴자!" << endl; }
};

int main() {
	klass k;

	// 파괴자는 여러 번 호출할 수 있어요!
	k.~klass();
	k.~klass();
	k.~klass();

	// 생성자는 임의로 호출할 수 없어요!
	// k.klass(); 불가능 

	// placement new -> 생성자를 임의 호출할 수 있어요!
	new (&k) klass;
	new (&k) klass;
	new (&k) klass;
}