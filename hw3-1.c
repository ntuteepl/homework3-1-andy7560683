#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int k = 1;
    for(int i = 2; i < n && i%n!=0; i++){
        if((n % i) == 0){
           k = 0;
        }
    }
    if(k == 1)
        printf("YES");
    else
        printf("NO");
    return 0;
}
