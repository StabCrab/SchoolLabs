#include <iostream>

using namespace std;

int main() {
    int birth;
    int death;
    int star;
    int count = 0;
    cin >> birth >> death >> star;
    if (birth % star != 0)
        birth = birth - birth % star + star;
    count = (death - birth) / star;
    cout << count + 1;
}