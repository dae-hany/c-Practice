#include <iostream>
#include <vector>
#include <map>
using namespace std;

class phonebook {
    map<int, vector<string>> table;
public:
    int hash(const string& s) {
        int ret = 0;
        for (auto i : s) ret += i;
        return ret % 8;
    }
    void input(const string& name, const string& number) {
        int key = hash(name);         // hash �Լ��� �̿��� name -> key�� ��ȯ
        table[key].push_back(number); // table�� key ��ġ�� number ���� 
    }
    void get(const string& name) {
        int key = hash(name);
        if (table.find(key) != table.end()) { // Ű�� �����ϴ� ��� 
            cout << "Phone numbers for : " << name << " : ";
            for (const auto& number : table[key]) // �ش� Ű�� ��� ��ȭ��ȣ ��� 
                cout << number << " ";
            cout << endl;
        }
        else {
            cout << "No phone numbers found for " << name << endl;
        }
    }
};

int main() {
    phonebook p;

    p.input("chonnam", "111-1111");
    p.input("national", "222-2222");
    p.input("university", "333-3333");
    p.input("c++", "444-4444");
    p.input("programming", "555-5555");
    p.input("and", "666-6666");
    p.input("practice", "777-7777");

    p.get("chonnam");
    p.get("national");
    p.get("university");
    p.get("c++");
    p.get("programming");
    p.get("and");
    p.get("practice");
}