#include <iostream>
using namespace std;
int constructor(int a) { //���⼭ 

    int ten, one, result, hund, thou;

    thou = a / 1000;
    hund = a % 1000 / 100;
    ten = (a % 100) / 10;
    one = a % 10;

    result = a + thou + hund + ten + one;
    return result;
}
int main() {
    int i = 1, n = 0;
    int s[10001] = { 0 }; // 10000���� ����..

    // n-1 > 10000 �ε� ���Ϸ��� n�� 10000�� ���� �� �ۿ� ����. �׷��ϱ� 
    while (i < 10000) { //�迭 ���ÿ� corrupted �� �Ŷ��..? �迭�� �������� �ߴ��� 10,023�� �Ǿ corrupted
        n = constructor(i); //2 = con(1)
        if(n <= 10000)
            s[n]++;
        i++;
    }

    for(i = 0; i < 10000; i++)
        if (s[i] == 0) //s[0]
            cout << i << endl; // 

    return 0;
}