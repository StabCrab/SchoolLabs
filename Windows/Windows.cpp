#include <iostream>

using namespace std;

int main()
{
    int windows;
    int number;
    int count;
    int sec;
    cin >> windows >> number >> count;
    int win [count];
    for (int i = 0; i < count; i++)
        win[i] = i;
    for (int i = 0 ; i < count; i++)
    {
        cin >> sec;
        if (sec > count)
            sec = count - sec;
        if (number == 1)
            number +=count;
        else
            number++;
        if (number > count)
            number = 1;
    }
    cout << number;
} //Ебошь строкой и не выебывайся