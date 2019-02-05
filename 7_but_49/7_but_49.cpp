//
// Created by trykr on 04.02.2019.
//

#include <iostream>
using namespace std;
int main()
{
    int n, max7 = -1, max = -1, count = 0;
    while (true)
    {
        int a;
        cin >> a;
        if (a == 0)
            break;
        if (a > max7 && a % 7 == 0)
        {
            max7 = a;
        }
        if (a > max && a % 7 != 0)
        {
            max = a;
        }
        count++;
    }
    int hans, cans;
    if (max == -1 || max7 == -1)
        cans = 1;
    else
        cans = max * max7;
    cin >> hans;
    cout << "Vvedeno chisel:" << count << endl;
    cout << "Kontrolnoe znachenie:" << hans << endl;
    cout << "Vicheslennoe znachenie:" << cans << endl;
    if (cans == hans)
        cout << "Znachenia sovpali";
    else
        cout << "Znachenia ne sovpali";
}