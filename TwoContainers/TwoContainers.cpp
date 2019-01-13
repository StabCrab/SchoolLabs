#include <iostream>
#include <set>
#include <iterator>
#include <iostream>

using namespace std;

int main()
{
    int n, m, a;
    set <int> Set;
    set <int> Common;
    set <int> Everything;
    cin >> n;
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        Set.insert(a);
        Everything.insert(a);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> a;
        Everything.insert(a);
        if (Set.find(a) != Set.end())
        {
            Common.insert(a);
        }
    }
    copy(Common.begin(), Common.end(), ostream_iterator<int>(cout, " "));
    copy(Everything.begin(), Everything.end(), ostream_iterator<int>(cout, " "));
}