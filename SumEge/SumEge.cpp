//
// Created by trykr on 09.01.2019.
//
// try again
#include <iostream>
using namespace std;
int main()
{
    int a;
    int rem0 = INT_MAX, rem1 = INT_MAX, rem2 = INT_MAX, rem3 = INT_MAX, rem4 = INT_MAX, rem5 = INT_MAX, Rem0 = INT_MAX, Rem3 = INT_MAX; // rem - remainder, т.е сортировка по остаткам.
    int n;
    int min = INT_MAX;
    int temp;
    cin >> n;
    bool f0 = false, f3 = false;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        switch(a % 6){
            case 0: {
                if (a < rem0 || a < Rem0)
                {
                    if (!f0)
                    {
                        f0 = true;
                        rem0 = a;
                    }
                    else
                    {
                        Rem0 = rem0;
                        rem0 = a;
                    }

                }
                break;
            }
            case 1: {
                rem1 = a;
                break;
            }
            case 2: {
                rem2 = a;
                break;
            }
            case 3: {
                if (a < rem3 || a < Rem3)
                {
                    if (!f3)
                    {
                        f3 = true;
                        rem3 = a;
                    }
                    else
                    {
                        Rem3 = rem3;
                        rem3 = a;
                    }

                }
                break;
            }
            case 4: {
                rem4 = a;
                break;
            }
            case 5: {
                rem5 = a;
                break;
            }
            default : {
                cout << "wat?";
                break;
            }
        }

    }
    if (rem0 + Rem0 < min && rem0 != INT_MAX && Rem0 != INT_MAX)
        min = rem0 + Rem0;
    if (rem1 + rem5 < min && rem1 != INT_MAX && rem5 != INT_MAX)
        min = rem1 + rem5;
    if (rem2 + rem4 < min && rem2 != INT_MAX && rem4 != INT_MAX)
        min = rem2 + rem4;
    if (rem3 + Rem3 < min && rem3 != INT_MAX && Rem3 != INT_MAX)
        min = rem3 + Rem3;
    cout << min << endl;
}