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
    AAA a('a');
    AAA z;
}