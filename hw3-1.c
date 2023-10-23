#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int prime = 1;
    for(int i = 2; i <= n-1; i++){
        if((n % i) == 0){
           prime = 0;
        }
    }
    if(prime == 1)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}

