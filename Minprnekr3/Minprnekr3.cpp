//
// Created by trykr on 06.02.2019.
//
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a;
    int min1 = INT_MAX, min2 = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a % 3 == 0)
            continue;
        if (a < min2)
        {
            if (a < min1)
            {
                min2 = min1;
                min1 = a;
            }
            else
                min2 = a;
        }
    }
    if (min1 == INT_MAX || min2 == INT_MAX)
    {
        cout << -1;
        return 0;
    }
    else
    {
        cout << min1* min2;
        return 0;
    }
}
