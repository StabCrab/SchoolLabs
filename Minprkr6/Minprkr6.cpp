//
// Created by trykr on 11.02.2019.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a;
    int kr3 = INT_MAX, kr2 = INT_MAX , kr6 = INT_MAX, min = INT_MAX;
    for (int i =0 ; i < n; i++){
        cin >> a;
        if (a % 3 == 0 && a < kr3 && a % 2 != 0)
            kr3 = a;
        if (a % 2 ==0 && a < kr2 && a % 3 != 0)
            kr2 = a;
        if (a % 6 == 0 && a < kr6) {
            if (kr6 < min) {
                min = kr6;
            }
            kr6 = a;
        }
        if (a < min && a != kr6)
            min = a;
    }
    if ((kr2 == INT_MAX || kr3 == INT_MAX) && (kr6 == INT_MAX || min == INT_MAX)) {
        cout << -1;
        return 0;
    }
    else
    {
        if (kr2 * kr3 < kr6 * min && (kr2 != INT_MAX && kr3 != INT_MAX)) {
            cout << kr2 * kr3;
            return 0;
        }
        else
        {
            cout << kr6 * min;
            return 0;
        }
    }
}