//
// Created by trykr on 06.03.2019.
//
#include<iostream>
using namespace std;
int fib(int n)
{
    if (n < 2)
        return 1;
    return fib(n - 1) + fib(n-2);
}
int main()
{
    fib(6);
}
