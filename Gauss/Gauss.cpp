#include <iostream>
using namespace std;
int main() {
    long int number;
    cin >> number;
    int sumcheck = 0;
    int sum = 0;
    string result;
    for (int i = 0; i < number; i++) {
        sumcheck += i + 1;
    }
    if (sumcheck % 2 != 0) {
        cout << "IMPOSSIBLE";
        return 0;
    }
    for (int i = number - 1; i >= 0; i--) {
        if (sum + i + 1 <= sumcheck / 2) {
            sum += i + 1;
            result += '+';
        } else
            result += '-';
    }

    char op;
    for (long int i = 0; i < result.length() / 2; i++) {
        op = result[i];
        result[i] = result[result.length() - 1 - i];
        result[result.length() - i - 1] = op;
    }
    cout << result;
    return 0;
}

