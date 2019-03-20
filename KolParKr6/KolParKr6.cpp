//
// Created by trykr on 11.03.2019.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int kol = 0, kol3 = 0, kol2 = 0;
    int kr6;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp % 6 == 0)
        {
            kol += n - 1;
            continue;
        }
        if (temp % 3 == 0)
            kol3++;
        if (temp % 2 == 0)
            kol2++;
    }
    if (kol2 != 0 && kol3 != 0)
        kol = kol + kol2 * kol3;
    cout << kol;
}