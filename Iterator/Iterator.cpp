//
// Created by trykr on 12.12.2018.
//

#include <iostream>
#include <set>
#include <iterator>

using namespace std;

int main()
{
    int n, x;
    set <int> Set;
    set<int>:: iterator it;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        Set.insert(x);
    }
    it = Set.begin();
    cout << *it;
    it = Set.end();
    it--;
    cout << *it;
    for (int i = 0; i < Set.size(); i++)
        cout << *it << " ";
    cin >> x;
    it = Set.find(x);
    if (it != Set.end())
    {
        cout << "yes";
    }
    else
        cout <<"no";
}