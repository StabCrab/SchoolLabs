#include <iostream>
using namespace std;

int main() {
    const int N = 6;
    int a[N];
    int kol = 0;
    for(int i = 0; i < N; i++) {
        cin >> a[i];
    }

    for (int i = 1; i < N - 1; i++) {
        if (a[i] < a[i-1] && a[i] < a[i+1])
            kol++;
    }

    if (a[0] < a[1])
        kol++;

    if (a[N - 1] < a[N - 2])
        kol++;

    cout << kol;
    return 0;
}
