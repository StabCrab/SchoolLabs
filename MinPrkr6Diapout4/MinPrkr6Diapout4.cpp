//
// Created by trykr on 04.03.2019.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a;
    int ar[4];
    int min = INT_MAX, min3 = INT_MAX, min2 = INT_MAX, min6 = INT_MAX;
    int result = INT_MAX;
    for (int i = 0; i < 4; i++)
    {
        cin >> ar[i];
    }
    for (int i = 4; i < n; i++)
    {
        cin >> a;
        if (ar[i % 4] % 3 == 0 && ar[i % 4] < min3)
            min3 = ar[i % 4];
        if (ar[i % 4] < min)
            min = ar[i % 4];
        if (ar[i % 4] < min2)
            min2 = ar[i % 4];
        if (ar[i % 4] < min6)
            min6 = ar[i % 4];
        ar[i % 4] = a;
        if (min3 !=  INT_MAX && min3 * a < result && a* min3 % 6 == 0)
            result = a * min3;
        if (min != INT_MAX && min * a < result && a * min % 6 == 0)
            result = a * min;
        if (min2 != INT_MAX && min2 * a < result && a * min2 % 6 == 0)
            result = a * min2;
        if (min6 != INT_MAX && min6 * a < result && a * min6 % 6 == 0)
            result = a * min6;
    }
    if (result == INT_MAX){
        cout << -1;
        return -1;
    }
    else {
        cout << result;
        return 0;
    }

}