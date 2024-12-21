class MyClass {
private:
    int* data;
public:
    MyClass() {
        data = new int[100];  // 동적 메모리 할당한 경우, 
    }

    ~MyClass() {
        delete[] data;  // 파괴자를 통해 동적 메모리 해제하는 것이 바람직함. 
    }
};