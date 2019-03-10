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
    int min = INT_MAX, min3 = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a % 3 == 0 && a < min3){
            if (min3 < min){
                min = min3;
            }
            min3 = a;
        }
        else
        {
            if (a < min)
                min = a;
        }
    }
    if (min3 == INT_MAX){
        cout << -1;
        return -1;
    }
    else {
        cout << min * min3;
        return 0;
    }

}