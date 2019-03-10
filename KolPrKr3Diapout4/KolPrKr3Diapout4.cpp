//
// Created by trykr on 06.03.2019.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int kolkr3 = 0, koll = 0;
    int a[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    int temp;
    int result;
    for (int i = 4; i < n; i++)
    {
        cin >> temp;
        if (a[i % 4] % 3 == 0)
            kolkr3++;
        koll++;
        if (temp % 3 == 0)
            result += koll;
        else
            result += kolkr3;
        a[i % 4] = temp;
    }
    cout << result;
}