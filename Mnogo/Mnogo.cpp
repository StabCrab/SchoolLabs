#include <iostream>
#include <set>
#include <iterator>

using namespace std;

int main()
{
    int n, a, countagain = 0, countonce = 0;

    cin >> n;
    set<int> :: iterator check;
    set <int> numbers;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if(numbers.find(a) != numbers.end())
        {
            countagain++;
            countonce--;
        }
        else
        {
            countonce++;
            numbers.insert(a);
        }

    }
    cout << countagain << endl;
    cout << countonce << endl;
}