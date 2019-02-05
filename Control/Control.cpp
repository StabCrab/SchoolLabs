//
// Created by trykr on 04.02.2019.
//
#include <iostream>
using namespace std;
int main()
{
    int n, rem1 = -1, rem0 = -1, hans, cans;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a % 2 == 0 && a > rem0)
            rem0 = a;
        if (a % 2 == 1 && a > rem1)
            rem1 = a;
    }
    cans = rem1 + rem0;
    cin >> hans;
    if (rem1 == -1 || rem0 == -1)
    {
        cout << "Kontrol ne proiden" << endl;
        return 0;
    }
    cout << cans;
    if (cans == hans)
    {
        cout << "Kontrol proiden";
        return 0;
    }
    else
    {
        cout << "Kontrol ne proiden";
        return 0;
    }
}
