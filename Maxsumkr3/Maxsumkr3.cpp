//
// Created by trykr on 11.03.2019.
//

#include <iostream>
using namespace std;
int main()
{
   int n;
   cin >> n;
   int max[3], max0 = 0;
   max[0] = 0;
   max[1] = 0;
   max[2] = 0;
   int temp;
   for (int i = 0; i < n; i++)
   {
       cin >> temp;
       switch (temp % 3)
       {
           case 0: {
               if (temp > max[0]) {
                   if (temp > max0) {
                       max[0] = max0;
                       max0 = temp;
                   }
                   else {
                       max[0] = temp;
                   }
               }
               break;
           }
           case 1: {
               if (temp > max[1])
                   max[1] = temp;
               break;
           }
           case 2: {
               if (temp > max[2])
                   max[2] = temp;
               break;
           }
       }
   }
    if ((max0 == 0 || max[0] == 0) && (max[1] == 0 || max[2] == 0)) {
        cout << -1;
    }
    if (max0 + max[0] > max[1] + max[2])
        cout << max0 + max[0];
    else
        cout << max[1] + max[2];
}