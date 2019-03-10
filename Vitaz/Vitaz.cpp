//
// Created by trykr on 06.03.2019.
//
#include <iostream>
using namespace std;

void func(string str, int n)
{
    if (str.length() > n)
        return;
    cout << str << endl;
    func(str+"a", n);
    func(str+"b", n);
}

int main()
{
    string str = "";
    int n = 3;
    func(str, 3);
}
