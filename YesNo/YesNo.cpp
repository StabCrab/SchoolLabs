//
// Created by trykr on 12.12.2018.
//

#include <iostream>
#include <set>
#include <iterator>

using namespace std;

int main()
{
    set <int> Set;
    int n, a;
    cin >> n;
    string YesNo[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (Set.find(a) == Set.end())
        {
            Set.insert(a);
            YesNo[i] = "NO";
        }
        else
        {
            YesNo[i] = "YES";
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << YesNo[i] <<endl;
    }
}