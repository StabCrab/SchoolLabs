#include <stdio.h>
#define N 2000
int main(){
    int a[N];
    int i, k, kol = 0;
    for (i = 0; i < N; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < N-1; i++){
        if ((a[i] + a[i+1]) % 10 != 3 && a[i] * a[i+1] < 0 && a[i] + a[i+1] % 10 != -3)
            kol++;
    }
    printf("%d", kol);
}