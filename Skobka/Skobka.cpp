//
// Created by trykr on 12.03.2019.
//

#include <iostream>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int circle = 0;
    int figure = 0;
    int square = 0;
    int triangle = 0;
    for (int i = 0; i < a.length(); i++)
    {
        switch (a[i])
        {
            case '(':
            {
                circle++;
                break;
            }
            case ')':
            {
                circle--;
                break;
            }
            case '{':
            {
                figure++;
                break;
            }
            case '}':
            {
                figure--;
                break;
            }
            case '[':
            {
                square++;
                break;
            }
            case ']':
            {
                square--;
                break;
            }
            case '<':
            {
                triangle++;
                break;
            }
            case '>':
            {
                triangle--;
                break;
            }
            default:
            {
                cout << "ERROR";
                return -1;
            }
        }
        if (circle < 0 || figure < 0 || square < 0 || triangle < 0)
        {
            cout << "NO";
            return 0;
        }
    }
    if (circle == 0 && figure == 0 && square == 0 && triangle == 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;

}