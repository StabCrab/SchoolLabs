//
// Created by trykr on 21.01.2019.
//

#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int hans, cans = INT_MAX; // вывод руками и вывод, подсчитанный компьютером
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> hans;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] * a[j] % 2 != 0 && a[i] * a[j] < cans && i != j)
            {
                cans = a[i] * a[j];
            }
        }
    }
    if (cans == INT_MAX)
    {
        if (hans == -1)
        {
            cout << -1 << endl;
            cout << "YES";
        }
        else
        {
            cout << -1 << endl;
            cout << "NO";
        }
    }
    else
    {
        if (hans == cans)
        {
            cout << cans << endl;
            cout << "YES";
        }
        else
        {
            cout << cans << endl;
            cout << "NO";
        }
    }

}