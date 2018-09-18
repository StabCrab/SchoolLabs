#include <iostream>
#include<cmath>
#include <stdio.h>
using namespace std;
int main()
{
    int n, kol[4], max = -1, count, r[4];
    for (int i = 0; i < 4; i++)
    {
        kol[i] = 0;
        r[i] = 0;
    }
    struct Point{
        int x;
        int y;
    };
    Point point;
    Point close[4];
    close[0].y = 1000;
    close[0].x = 1000;

    close[1].x = 1000;
    close[1].y = 1000;

    close[2].x = 1000;
    close[2].y = 1000;

    close[3].x = 1000;
    close[3].y = 1000;
     cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> point.x;
        cin >> point.y;

        if (point.x > 0 && point.y > 0)
        {
            kol[0]++;

            if (abs(point.x) < close[0].x || abs(point.y) < close[0].y)
            {
                close[0].x = point.x;
                close[0].y = point.y;
            }
        }
        if (point.x > 0 && point.y < 0)
        {
            kol[1]++;

            if (abs(point.x) < close[1].x || point.y < close[1].y)
            {
                close[1].x = point.x;
                close[1].y = point.y;
            }
        }
        if (point.x < 0 && point.y < 0)
        {
            kol[2]++;

            if (abs(point.x) < close[2].x || abs(point.y) < close[2].y)
            {
                close[2].x = point.x;
                close[2].y = point.y;
            }
        }
        if (point.x < 0 && point.y > 0)
        {
            kol[3]++;

            if (abs(point.x) < close[3].x || abs(point.y) < close[3].y)
            {
                close[3].x = point.x;
                close[3].y = point.y;
            }
        }
    }
    if (close[0].x < close[0].y)
        r[0] = close[0].x;
    else
        r[0] = close[0].y;

    if (abs(close[1].x) < abs(close[1].y))
        r[1] = abs(close[1].x);
    else
        r[1] = abs(close[1].y);

    if (abs(close[2].x) < abs(close[2].y))
        r[2] = abs(close[2].x);
    else
        r[2] = abs(close[2].y);

    if (abs(close[3].x) < abs(close[3].y))
        r[3] = abs(close[3].x);
    else
        r[3] = abs(close[3].y);

    for (int i = 0; i < 4; i++)
    {
        if (kol[i] > max)
        {
            max = kol[i];
            count = i;
        }
        if (kol[i] == max)
        {
            if (r[i] < r[count])
            {
                max = kol[i];
                count = i;
            }
        }
    }
    printf("%d %d (%d, %d)", count, r[count], close[count].x, close[count].y);
    return 0;
}