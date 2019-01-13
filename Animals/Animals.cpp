//
// Created by trykr on 26.12.2018.
//
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        int amountA, amountB;
        cin >> amountA >> amountB;
        int A[amountA];
        int B[amountB];
        for (int j = 0; j < amountA; j++)
        {
            cin >> A[j];
        }
        for (int j = 0; j < amountB; j++)
        {
            cin >> B[j];
        }
        for (int j = 0; j < amountA; j++)
        {
            for (int k = 0; k < amountB; k++)
            {
                if (A[j] > B[k])
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
}
