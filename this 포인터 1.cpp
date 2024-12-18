#include <iostream> 
using namespace std;
class Stack {

public:
    int stack[16];
    int sp;

    Stack() : sp(0) {}

    void push(int value) {
        cout << this << endl; // this를 통해 객체의 주소 출력
        stack[sp++] = value;
    }

    int pop() {
        cout << this << endl; // this를 통해 객체의 주소 출력 
        return stack[--sp];
    }
};
int main() {
    Stack s1;
    Stack s2;

    cout << &s1 << endl; // s1 객체 주소 출력 
    s1.push(10);
    s1.pop();

    cout << &s2 << endl; // s2 객체 주소 출력
    s2.push(20);
    s2.pop();

    

}