#include <iostream>;
using namespace std;

// union ������ Ÿ�� ���� 
union one4all{
    int in;
    long lo;
    double dou;
};

int main() {
    one4all uni;

    cout << sizeof(uni) << endl; // 8 bytes : ������ �ϳ��� ����Ǵϱ� ���� ū �ڷ����� ũ�⸸ŭ

    uni.in = 10; // �̶� union ������ Ÿ�Կ��� 10�� ����Ǿ��ٰ�
    uni.lo = 20; // ���Ӱ� 20�� ���޵ǹǷ� 20�� ����Ǿ��ٰ� 
    uni.dou = 30; // �ᱹ�� 10�� 20 ��� �������� �ʰ� 30�� ������

    cout << uni.in << endl; // 0 ���
    cout << uni.lo << endl; // 0 ��� 
    cout << uni.dou << endl; // 30 ��� 

    return 0;
}