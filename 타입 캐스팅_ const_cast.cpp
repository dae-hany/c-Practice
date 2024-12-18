#include <iostream> 
using namespace std;

int main() {
	char str[] = "Hello World!";
	const char* ptr = str; // ptr이 가리키는 값을 const로 설정 

	// ptr[0] = 'A';// 에러 발생! const 때문에 ptr이 가리키는 값은 변경할 수 없음
	// 
	char* c = const_cast<char*>(ptr); // ptr의 const 속성 제거 
	c[0] = 'A'; // 변경 가능 

	cout << c << endl; // Aello World! 출력 
}