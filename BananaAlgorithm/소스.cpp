#include <iostream>
using namespace std;
int constructor(int a) { //여기서 

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
    int s[10001] = { 0 }; // 10000개가 들어가요..

    // n-1 > 10000 인데 구하려면 n이 10000을 넘을 수 밖에 없어. 그러니까 
    while (i < 10000) { //배열 스택에 corrupted 된 거라고..? 배열에 넣으려고 했더니 10,023이 되어서 corrupted
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