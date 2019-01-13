//
// Created by trykr on 26.12.2018.
//

#include <iostream>
using namespace std;
int zerofind(char a)
{
    if (a =='0')
        return true;
    else
        return false;

}

float mod(char a)
{
    if (a == '0')
        return 0;
    if (a == '1')
        return 1;
    if (a == '2')
        return 2;
    if (a == '3')
        return 3;
    if (a == '4')
        return 4;
    if (a == '5')
        return 0;
    if (a == '6')
        return 1;
    if (a == '7')
        return 2;
    if (a == '8')
        return 3;
    if (a == '9')
        return 4;
    if (a == 'a')
        return 0;
    if (a == 'b')
        return 1;
    if (a == 'c')
        return 2;
    if (a == 'd')
        return 3;
    if (a == 'e')
        return 4;
    if (a == 'f')
        return 0;
}

int main()
{
    string a;
    cin >> a;
    float sum = 0;
    float zerocount = 0;
    for(int i = 0; i < a.size(); i++)
    {
        if (zerofind(a.back()))
            zerocount += 1.0;
        sum += mod(a.back());
    }
    float b = a.size() - zerocount;
    float o = sum / b;
    printf("%f", sum / b);
}