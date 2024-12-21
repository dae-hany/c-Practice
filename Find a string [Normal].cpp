#include <iostream>
#include <string>

using namespace std;
int main() {
    string str1, str2;
    int flag = -1; // 찾은 위치를 저장할 변수, -1은 찾지 못한 경우 

    cout << "string1 : ";
    getline(cin, str1);
    cout << "string2 : ";
    getline(cin, str2);

    int len1 = str1.length();
    int len2 = str2.length();

    for (int i = 0; i <= len1 - len2; i++) {
        int j;
        for (j = 0; j < len2; j++) {
            if (str1[i + j] != str2[j])
                break;
        }
        if (j == len2) {
            flag = i;
            break;
        }
    }

    if (flag == -1) cout << "not found" << endl;
    else cout << flag << endl;
}