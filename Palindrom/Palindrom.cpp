//
// Created by trykr on 26.12.2018.
//
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n];
    int f = 0;
    int k;
    int number;

    for (int i = 0; i < n; i++)
        cin >> ar[i];
    int ar1[n/2];
    int ar2[n/2];
    for (int i = 0; i < n / 2; i++) {
        ar1[i] = ar[i];
    }
    int e = 0;
    for (int i = n - 1; i > n / 2 - 1; i--)
    {
        ar2[e] = ar[i];
        e++;
    }
    for (int i = 0; i < n / 2; i++)
    {
        if (ar1[i] == ar2[i])
        continue;
        else
        {
            f++;
            if (f == 2)
                return -1;
            k = n - i + 1;
            number = ar1[i];
        }
    }
    cout << k << ' ' << number;
}
