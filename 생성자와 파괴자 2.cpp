class MyClass {
private:
    int* data;
public:
    MyClass() {
        data = new int[100];  // ���� �޸� �Ҵ��� ���, 
    }

    ~MyClass() {
        delete[] data;  // �ı��ڸ� ���� ���� �޸� �����ϴ� ���� �ٶ�����. 
    }
};