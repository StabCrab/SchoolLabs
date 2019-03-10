//
// Created by trykr on 27.02.2019.
//

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int e, a[5];
    int minkr1 = INT_MAX, minkr2 = INT_MAX, minkr3 = INT_MAX, mina = INT_MAX;
    int min[5];
    for (int i = 0; i < n; i++) {
        cin >> e;
        a[i % 5] = e;
        switch (a[i % 5] % 3) {
            case 0: {
                if (a[i % 5] < minkr3)
                    minkr3 = a[i % 5];
                break;
            }
            case 1: {
                if (a[i % 5] < minkr1)
                    minkr1 = a[i % 5];
                break;
            }
            case 2: {
                if (a[i % 5] < minkr2)
                    minkr2 = a[i % 5];
                break;
            }
            default:{
                break;
            }
        }
    }
    return 0;
}