//
// Created by trykr on 06.03.2019.
//

#include <iostream>
using namespace std;
int main()
{
    string a = "100";
    string b = "744";
    for (int i = 0; i < 3; i++)
        a[i] += b[i] - 48;
    cout << a;
}