#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f;
    f = fopen ("input.txt", "r");

    if (f == NULL)
    {
        printf("No file");
        return -1;
    }

    int n, err;
    err = fscanf(f, "%d", &n);

    if (err != 1)
    {
        printf("ERROR err = %d", err);
        return -1;
    }

    printf("n = %d\n", n);

    int A[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) {
            err = fscanf(f, "%d", &A[i][j]);
            if (err != 1)
            {
                printf("ERROR, err = %d", err);
                return -1;
            }
        }
    }

    int sum1 = 0;
    for (int i = 0; i < n / 2 ; i++) {
        for (int j = i + 1; j < n - 1 - i; j++)
            sum1 += A[i][j];
    }

    printf("SUM1 = %d\n", sum1);

    int sum2 = 0;
    for (int i = n - 1; i > n / 2; i--) {
        for (int j = i - 1; j > n - 1 - i; j--)
            sum2 += A[i][j];
    }

    printf("SUM2 = %d\n", sum2);

    if (sum1 == sum2)
        printf("Sums equal");
    else
        printf("Sums not equal");

    return sum1 == sum2 ? 0 : -1;
}