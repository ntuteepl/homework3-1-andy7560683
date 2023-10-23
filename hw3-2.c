#include <stdio.h>

int main() {
    int s1, d1, s2, d2, s3, d3;
    scanf("%d %d %d %d %d %d", &s1, &d1, &s2, &d2, &s3, &d3);
    int a[25] = {0};
    for (int i = s1; i < d1; i++) {
        a[i]++;
    }
    for (int i = s2; i < d2; i++) {
        a[i]++;
    }
    for (int i = s3; i < d3; i++) {
        a[i]++;
    }
    int ans = 0;
    for (int i = 0; i < 25; i++) {
        if (a[i] > ans) {
            ans = a[i];
        }
    }
    printf("%d\n", ans);
    return 0;
}
