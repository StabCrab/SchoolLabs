//
// Created by trykr on 11.03.2019.
//

#include <iostream>
using namespace std;
int main()
{
    int kr[18];
    for (int i = 0; i < 18; i++)
    {
        kr[i] = 0;
    }
    int n;
    cin >> n;
    int a[5];
    int kol;
    int temp;
    for (int i = 0 ; i < 5; i++)
    {
        cin >> a[i];
    }
    for (int i = 5; i < n; i++)
    {
        cin >> temp;
        kr[a[i % 5] % 18]++;
        kol += kr[18 - temp % 18];
        kr[i % 5] = temp;
    }
    cout << kol;
}