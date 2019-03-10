//
// Created by trykr on 06.02.2019.
//
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int A[n];
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (A[i] * A[j] < min && A[i] * A[j] % 3 == 0)
                min = A[i] * A[j];
        }
    }
    if (min == INT_MAX)
    {
        cout << -1;
        return 0;
    }
    else
    {
        cout << min;
        return 0;
    }
}
