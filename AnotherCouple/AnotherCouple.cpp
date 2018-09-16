#include <stdio.h>
#define N 2000
int main() {
    int a[N], kol = 0;
    int i, j, k;
    for (i = 0; i < N; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < N - 1; i++) {
        if (a[i] % 10 == 3 && a[i+1] % 10 == 3 && a[i] % 3 !=0 && a[i+1] % 3 != 0 )
            kol++;
    }
    printf("%d", kol);
}