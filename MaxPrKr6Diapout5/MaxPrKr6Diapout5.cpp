//
// Created by trykr on 11.03.2019.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a;
    int ar[4];
    int max = INT_MAX, max3 = INT_MAX, max2 = INT_MAX, max6 = INT_MAX;
    int result = INT_MAX;
    for (int i = 0; i < 4; i++)
    {
        cin >> ar[i];
    }
    for (int i = 4; i < n; i++)
    {
        cin >> a;
        if (ar[i % 4] % 3 == 0 && ar[i % 4] > max3)
            max3 = ar[i % 4];
        if (ar[i % 4] > max)
            max = ar[i % 4];
        if (ar[i % 4] > max2)
            max2 = ar[i % 4];
        if (ar[i % 4] > max6)
            max6 = ar[i % 4];
        ar[i % 4] = a;
        if (max3 !=  INT_MAX && max3 * a > result && a* max3 % 6 == 0)
            result = a * max3;
        if (max != INT_MAX && max * a > result && a * max % 6 == 0)
            result = a * max;
        if (max2 != INT_MAX && max2 * a > result && a * max2 % 6 == 0)
            result = a * max2;
        if (max6 != INT_MAX && max6 * a > result && a * max6 % 6 == 0)
            result = a * max6;
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