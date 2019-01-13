#include <iostream>
using namespace std;
int FindNOD(int a, int b)
{
    while (a != 0 && b!= 0) {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    return a + b;
}
int FindNOK(int a, int b)
{
    int NOK;
    NOK = (a * b) / FindNOD(a, b);
    return NOK;
}
int main()
{
    int a, b, n, NOK;
    cin >> n;
    cin >> a;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> b;
        a = FindNOK(a, b);
    }
    cout << a;


}
