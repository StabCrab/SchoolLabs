//
// Created by trykr on 20.12.2018.
//

#include <iostream>
#include <set>
#include <iterator>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
    srand (time(NULL));
    int n;
    cin >> n;
    int a = rand() %n;
    set <int> Numbers;
    int Santa[n];
    for (int i = 0; i < n; i++)
    {
        while (Numbers.find(a) != Numbers.end() || a == i)
            a = rand() % n;
        Numbers.insert(a);
        Santa[i] = a;
    }
    for (int i = 0; i < n; i++)
        cout << Santa[i] << ' ';
}