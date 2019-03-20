//
// Created by trykr on 12.03.2019.
//

#include <iostream>
using namespace std;
string form(string a)
{
//    a[a.find('a')] = 'b';
//    a[a.find('b')] = 'c';
//    a[a.find('c')] = 'a';
    for (int i = 0; i < a.length(); i++)
    {
        switch (a[i])
        {
            case 'a':
            {
                a[i] = 'b';
                break;
            }
            case 'b':
            {
                a[i] = 'c';
                break;
            }
            case 'c':
            {
                a[i] = 'a';
                break;
            }
            default:
            {
                break;
            }
        }
    }
    return a;
}
int main()
{
    string a = "a";
    int n;
    cin >> n;
    while (a.length() <= n)
    {
        a += form(a);
    }
    cout << a[n];
}