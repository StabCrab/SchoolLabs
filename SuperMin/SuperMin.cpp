//
// Created by trykr on 16.01.2019.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string a, mins;
    int str = 0;
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < 3; k++)
        {
            cin >> a;
            for (int j = 0; j < a.length(); j++) {
                str += int(a[j]);
            }
            if (str < min)
            {
                min = str;
                mins = a;

            }

        }
        cout << mins << endl;
    }
}