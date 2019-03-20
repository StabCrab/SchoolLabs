//
// Created by trykr on 18.03.2019.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int kol = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
//            if (a[i] * a[j] % 3 == 0 && i != j && abs(i - j) < 6)
//            {
//                cout << a[i] << " " << a[j] << endl;
//            }
            kol++;
        }
    }
    cout << kol / 2;
}