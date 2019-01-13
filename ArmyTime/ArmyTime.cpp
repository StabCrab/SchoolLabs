#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int soldiers, square = 0;
    cin >> soldiers;
    int i;
    for (i = 1; sqrt(2147483647) > i; i++) {
        if (soldiers % (i * i) == 0 && i * i > square) {
            square = i * i;
        }
    }
    cout << square;
    return 0;
}