//
// Created by trykr on 12.03.2019.
//
#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;
string sum(string a, int SS)
{
    std::reverse(a.begin(), a.end());
    int n = 0;
    a[n] += 1;
    while (a[n] == 97 + SS)
    {
        a[n] = 'a';
        a[n+1] += 1;
        n++;
    }
    std::reverse(a.begin(), a.end());
    return a;
}
int main() {
    int length, SS;
    cin >> length;
    cin >> SS;
    string a;
    for (int i = 0; i < length; i++)
        a += 'a';
    for (int i = 0; i < pow(SS, length); i++)
    {
        cout << a << endl;
        a = sum(a, SS);
    }
}