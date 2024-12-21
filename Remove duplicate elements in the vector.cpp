#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<char>& v) {
    for(size_t i = 1; i < v.size(); i++)
        for (size_t j = i; j < v.size(); j++)
            if (v[j-1] > v[j])
                swap(v[j-1], v[j]);
}

void removeDuplicates(vector<char>& v) {
    if (v.empty()) return; // 빈 벡터 처리

    vector<char> temp;
    temp.push_back(v[0]);

    for (size_t i = 1; i < v.size(); i++)
        if (v[i] != v[i - 1])
            temp.push_back(v[i]);
    v = temp;
}

int main(){
    vector<char> v{ 'a', 'b', 'b', 'a', 'e', 'd', 'd', 'b' };

    // 1. 정렬
    bubbleSort(v);

    // 2. 중복 제거 
    removeDuplicates(v);

    for (auto i : v) cout << i << " ";
    cout << endl;
}