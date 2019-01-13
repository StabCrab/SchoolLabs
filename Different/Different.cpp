//
// Created by trykr on 12.12.2018.
//

#include <iostream>
#include <set>
#include <iterator>

using namespace std;

int main()
{
    int n, differentcount = 0, a;
    set <int> Set;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (Set.find(a) == Set.end())
        {
            differentcount++;
            Set.insert(a);
        }
    }
    cout << differentcount;
}