#include<iostream>
using namespace std;

int main() {
    int N, D, K, max = 1001, a=-1;
    cin >> N;
    int candies[N], kol[N];
    for(int i = 0; i < N; i++)
        kol[N]=0;
    for( int i = 0; i < N ; i++)
    {
        cin >> D;
        cin >> K;
        candies[i] = K%D;
        for (int p = 0; p < i; p++)
        {
            if (candies[p] == candies[i])
                kol[i]++;
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (kol[i]> max)
        {
            a = candies[i];
            max = kol[i];
        }
        if (kol[i] == max && a < candies[i])
        {
            a = candies[i];
            max = kol[i];
        }
    }
    cout << a;
}