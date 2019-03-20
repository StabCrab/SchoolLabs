//
// Created by trykr on 11.03.2019.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int kol = 0, kol0 = 0, kol1 = 0, kol2 = 0;
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    int temp;
    int result;
    for (int i = 5; i < n; i++)
    {
        cin >> temp;
        switch (a[i % 5] % 3)
        {
            case 0:
            {
                kol0++;
                break;
            }
            case 1:
            {
                kol1++;
                break;
            }
            case 2:
            {
                kol2++;
                break;
            }
        }
        switch(temp % 3)
        {
            case 0:
            {
                kol += kol0;
                break;
            }
            case 1:
            {
                kol += kol1;
                break;
            }
            case 2:
            {
                kol +=kol2;
                break;
            }
        }
        a[i % 5] = temp;
    }
    cout << kol;
}