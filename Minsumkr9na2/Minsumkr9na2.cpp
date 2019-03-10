//
// Created by trykr on 11.02.2019.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] + a[j] < min && j != i && (a[i] + a[j]) % 9 == 0)
                min = a[i] + a[j];
        }
    }
    cout << min;
}