
#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    unsigned int gold = 0;
    int i = 0;
    while (gold < 2147483649)
    {
        i++;
        gold += pow(n, i);
        cout << gold <<' '<< i << endl;
    }
    i++;
    cout << i;
}
