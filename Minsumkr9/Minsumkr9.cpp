//
// Created by trykr on 13.02.2019.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int rem[9];
    for (int i = 0; i < 9; i++)
    {
        rem[i] = INT_MAX;
    }
    int a;
    int rem9 = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        switch (a % 9)
        {
            case 0:
            {
                if (a < rem9)
                {
                    if (rem9 < rem[0])
                        rem[0] = rem9;
                }
                rem9 = a;
                break;
            }
            case 1:
            {
                if (a < rem[1])
                    rem[1] = a;
                break;
            }
            case 2:
            {
                if (a < rem[2])
                    rem[2] = a;
                break;
            }
            case 3:
            {
                if (a < rem[3])
                    rem[3] = a;
                break;
            }
            case 4:
            {
                if (a < rem[4])
                    rem[4] = a;
                break;
            }
            case 5:
            {
                if (a < rem[5])
                    rem[5] = a;
                break;
            }
            case 6:
            {
                if (a < rem[6])
                    rem[6] = a;
                break;
            }
            case 7:
            {
                if (a < rem[7])
                    rem[7] = a;
                break;
            }
            case 8:
            {
                if (a < rem[8])
                    rem[8] = a;
                break;
            }
            default:
            {
                cout << "ERROR";
                return -1;
            }

        }
    }
    int min = INT_MAX;
    for (int i = 1; i < 5; i++)
    {
        if (rem[i] + rem[9-i] < min && rem[i] != INT_MAX && rem[9-i] != INT_MAX)
            min = rem[i] + rem[9-i];
    }
    if (rem[0] + rem9 < min && rem[0] != INT_MAX && rem9 != INT_MAX)
    {
        min = rem[0] + rem9;
    }
    cout << min;
    return 0;
}