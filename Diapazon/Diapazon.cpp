//
// Created by trykr on 01.03.2019.
//
// вне диапазона из 5 элементов минимальное произведение кратное 3
#include <iostream>
using namespace std;
int main()
{
    int n;
    int min3 = 1001;
    int min = 1001;
    int result = 1000 * 1000 + 1;
    int temp;
    int a[4];
    cin >> n;
    for (int i = 0; i < 4 ; i++)
        cin >> a[i];
    for (int i = 4; i < n; i++)
    {
        cin >> temp;
        if (a[i % 4] % 3 == 0 && a[i % 4] < min3)
            min3 = a[i % 4];
        else
            if (a[i % 4] < min)
                min = a[i % 4];
        if (temp * min % 3 == 0 && temp * min < result && min != 1001)
            result = temp * min;
        if (temp * min3 < result && min3 != 1001)
            result = temp * min3;
        a[i % 4] = temp;
    }
    if (result == 1000 * 1000 + 1)
        cout << -1;
    else
        cout << result;
    return 0;

}