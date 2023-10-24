#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a1, a2, a3, a4, b1, b2, b3, b4;
    a1 = n / 1000;
    a2 = (n - a1 * 1000) / 100;
    a3 = (n - a1 * 1000 - a2 * 100) / 10;
    a4 = (n - a1 * 1000 - a2 * 100 - a3 * 10);

    b1 = m / 1000;
    b2 = (m - b1 * 1000) / 100;
    b3 = (m - b1 * 1000 - b2 * 100) / 10;
    b4 = (m - b1 * 1000 - b2 * 100 - b3 * 10);

    int N, M;
    N = a1 + a2 + a3 + a4;
    M = b1 + b2 + b3 + b4;

    if(N>M){
        printf("%d\n",m);
    }
    else if(N<M){
        printf("%d\n",n);
    }
    else{
        if(n>m){
            printf("%d\n",m);
        }
        else if(n<m){
            printf("%d\n",n);
        }

    }
}
