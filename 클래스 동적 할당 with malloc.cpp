#include <iostream> 
using namespace std;

class AAA {
private:
    char id;
public:
    AAA() : id('z') {
        cout << "I am AAA! " << endl;
    }
    AAA(char c) {
        cout << "I am a " << c << "!" << endl;
        this->id = c;
    }
    ~AAA() {
        cout << id << " will be back! " << endl;
    }

    void print() {
        cout << "Id is " << id << endl;
    }
};

int main() {
    AAA* ptr = (AAA*)malloc(sizeof(AAA)); // C Style, malloc -> ������ ȣ�� x

    ptr->print(); // Id is ���

    free(ptr);
}