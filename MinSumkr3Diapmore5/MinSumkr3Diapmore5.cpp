//
// Created by trykr on 04.03.2019.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
        cin >> n;
    int temp;
    int rem[3];
        for (int i = 0; i < 3; i++)
        {
            rem[i] = 1001;
        }
    int rem0 = 1001;
    int result = 5000;
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    for (int i = 5; i < n; i++)
    {
        cin >> temp;
        switch (a[i % 5] % 3)
        {
            case 0 :
            {
                if (a[i % 5] < rem[0])
                    if (a[i % 5] < rem0)
                        rem0 = rem[0];
                rem[0] = a[i % 5];
                break;
            }
            case 1 :
            {
                if (a[i % 5] < rem[1])
                    rem[1] = a[i % 5];
                break;
            }
            case 2 :
            {
                if (a[i % 5] < rem[1])
                    rem[2] = a[i % 5];
                break;
            }
            default:break;
        }
        if (rem[0] + rem0 < result && rem[0] != 1001 && rem0 != 1001)
            result = rem0 + rem[0];
        if (rem[2] + rem[1] < result && rem[2] != 1001 && rem[1] != 1001)
            result = rem[1] + rem[2];
        a[i % 5] = temp;
    }
    if (result == 5000)
        cout << -1;
    else
        cout << result;
}