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
};

int main() {
    AAA* ptr1 = new AAA;
    AAA* ptr2 = new AAA('c');

    delete ptr1;
    delete ptr2;
}