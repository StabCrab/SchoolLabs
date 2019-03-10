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
    int min = INT_MAX, min3 = INT_MAX;
    int result = INT_MAX;
    for (int i = 0; i < 4; i++)
    {
        cin >> ar[i];
    }
    for (int i = 4; i < n; i++)
    {
        cin >> a;
        if (ar[i % 4] % 3 == 0 && ar[i % 4] < min3){
//            if (min3 < min){
//                min = min3;
//            }
            min3 = ar[i % 4];
        }
        else
        {
            if (ar[i % 4] < min)
                min = ar[i % 4];
        }
        ar[i % 4] = a;
        if (min3 !=  INT_MAX && min3 * a < result && a* min3 % 3 == 0)
            result = a * min3;
        if (min != INT_MAX && min * a < result && a * min % 3 == 0)
            result = a * min;
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