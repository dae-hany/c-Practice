#include <iostream> 
using namespace std;

class Stack {

public:
    int stack[16];
    int sp;

    Stack() : sp(0) {}

    void push(int value) {
        printf("%08X \n", &Stack::push);
        stack[sp++] = value;
    }

    int pop() {
        printf("%08X \n", &Stack::pop);
        return stack[--sp];
    }
};

int main() {
    Stack s1;
    Stack s2;

    s1.push(10);
    s2.push(20);

    s1.pop();
    s2.pop();
}