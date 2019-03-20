#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int temp;
    int kol = 0;
    int a[6];
    for (int i = 0; i < 6; i++)
    {
    }
    for (int i = 0 ; i < n; i++)
    {
        cin >> temp;
        if (temp % 3 == 0)
            kol += min(i, 6) + min(n - i, 6);
        a[i % 6] = i;
    }
    cout << kol;
}
