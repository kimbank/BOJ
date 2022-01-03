// 1000
// 피보나치 함수
// https://www.acmicpc.net/problem/1003




#include <stdio.h>

int main() {
    int I, temp, fibo[41][2];
    scanf("%d",&I);

    fibo[0][0]=1; fibo[0][1]=0;
    fibo[1][0]=0; fibo[1][1]=1;
    
    for(int i = 2; i <= 40; i++) {
        fibo[i][0]=fibo[i - 1][0]+fibo[i - 2][0];
        fibo[i][1]=fibo[i - 1][1]+fibo[i - 2][1];
    }

    while(I--) {
        scanf("%d",&temp);
        printf("%d %d\n", fibo[temp][0], fibo[temp][1]);
    }
    return 0;
}