//
// Created by trykr on 16.01.2019.
//

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a;
    int maxakr6 = 0, maxa = 0, maxakr3 = 0, maxakr2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a % 6 == 0 && a > maxakr6)
        {
            maxakr6 = a;
            continue;
        }
        if (a > maxa)
        {
            maxa = a;
            continue;
        }
        if (a % 3 == 0 && a > maxakr3)
        {
            maxakr3 = a;
            continue;
        }
        if (a % 2 == 0 && a > maxakr2)
        {
            maxakr2 = a;
            continue;
        }
    }
    if (maxakr6 * maxa > maxakr3 * maxakr2)
        cout << maxakr6 * maxa << endl;
    else
        cout << maxakr3 * maxakr2 << endl;
}
