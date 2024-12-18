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
    AAA* ptr = (AAA*)malloc(sizeof(AAA)); // C Style, malloc -> 생성자 호출 x

    ptr->print(); // Id is 출력

    free(ptr);
}