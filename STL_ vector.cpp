#include <iostream>
#include <vector> // 벡터 사용을 위해 필요
using namespace std;

// 1. vec.push_back(값) : 벡터의 맨 뒤에 값 추가 
// 2. vec.size() : 현재 벡터에 존재하는 원소의 개수 
// 3. vec.capacity() : 현재 벡터의 용량(수용할 수 있는 원소의 개수)
// 4. vec.pop_back() : 벡터의 맨 뒷 값 제거
// 5. vec.back()     : 벡터의 맨 뒷 값 접근 
// 6. vec.empty()    : 벡터가 비어있다면 1, 아니면 0 

int main() {
	vector<int> vec1; // 빈 벡터 생성

	// push_back : 값 추가 
	vec1.push_back(10); // vec1 = [10]
	vec1.push_back(20); // vec1 = [10, 20]
	vec1.push_back(30); // vec1 = [10, 20, 30]

	cout << vec1.size() << endl;       // 벡터에 저장된 원소 개수 => 3 
	cout << vec1.capacity() << endl;  // 벡터의 현재 용량 출력 => 3

	vector<int> vec2(20); // 크기가 20인 벡터 생성
	cout << vec2.size() << endl;       // 초기화된 원소 개수 출력 => 20 
	cout << vec2.capacity() << endl;  // 용량 출력 => 20 

	// for 루프를 사용하여 vec1의 모든 원소 출력
	for (int i = 0; i < vec1.size(); i++)
		cout << vec1[i] << endl;

	cout << endl;

	// while 루프를 사용하여 벡터의 마지막 원소부터 출력하고 제거
	while (!vec1.empty()) {
		cout << vec1.back() << endl; // 마지막 원소 출력
		vec1.pop_back();             // 마지막 원소 제거
	}
}