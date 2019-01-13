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
    int a;
    cin >> a;
    while (a != 0)
    {
        Set.insert(a);
        cin >> a;
    }
    set <int> :: iterator it = Set.end();
    it--;
    copy(Set.begin(), Set.end(), ostream_iterator<int>(cout, " "));
    cout << *it;
    }