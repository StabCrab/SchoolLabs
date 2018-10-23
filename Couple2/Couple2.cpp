#include<iostream>
#define N 5
using namespace std;
int main()
{
    int a[N];
    int  kol = 0;
    cin >> a[0];
    for (int i = 1; i < N; i++)
    {
        cin >> a[i];
        if (a[i] % 10 != 3 && a[i] / 10 != 0 && a[i] /100 == 0 && a[i-1] % 10 != 3 && a[i-1] / 10 != 0 && a[i-1] /100 ==0)
            kol++;

    }
    cout << kol;
    return 0;
}