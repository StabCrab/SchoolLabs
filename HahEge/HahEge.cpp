//
// Created by trykr on 21.01.2019.
//
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n, temp, a[6], min = INT_MAX, min2 = INT_MAX, result = INT_MAX;
    cin >> n;
    for (int i = 0; i < 6; i++)
        cin >> a[i];
    for (int i = 6; i < n; i++)
    {
        cin >> temp;
        if (a[i % 6] % 2 == 0 && a[i % 6] < min2)
            min2 = a[i % 6];
        if (a[i % 6] < min && a[i % 6] % 2 != 0)
            min = a[i % 6];
        if (min * temp < result && min * temp % 2 == 0 && min != INT_MAX)
            result = min * temp;
        if (min2 * temp < result && min2 != INT_MAX)
            result = min2 * temp;
        a[i % 6] = temp;
    }
    if (result != INT_MAX)
        cout << result;
    else
        cout << "NO";
}
