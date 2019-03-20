#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
bool compare(string a, string b)
{
    if (a.length() > b.length())
        return true;
    if (a.length() < b.length())
        return false;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] > b[i])
            return true;
        if (a[i] < b[i])
            return false;
    }
    return true;
}
string minuss(string a, string b)
{
    std:: reverse(a.begin(), a.end());
    std:: reverse(b.begin(), b.end());
    for (int i = 0; i < max(a.length(), b.length()); i++)
    {
        if (isalpha(a[i]) ||(isalpha(b[i])))
        {
            return "RORRE";
        }
        if (i == a.length())
            a += '0';
        if (i == b.length())
            b += '0';
        a[i] = a[i] - b[i] + 48;
        if (a[i] < 48)
        {
            a[i] += 10;
            a[i+1]--;
        }
    }
    while (a[a.length() - 1] == '0')
    {
        a.erase(a.end() - 1);
    }
    std:: reverse(a.begin(), a.end());
    return a;
}
string sum(string a, string b)
{
    std:: reverse(a.begin(), a.end());
    std:: reverse(b.begin(), b.end());
    bool if10 = false;
    for (int i = 0; i < max(a.length(), b.length()); i++)
    {
        if (isalpha(a[i]) ||(isalpha(b[i])))
        {
            return "RORRE";
        }
        if (i == a.length())
            a += '0';
        if (i == b.length())
            b += '0';
        if(if10)
        {
            a[i] += b[i] - 48 + 1;
            if10 = false;
        }
        else
            a[i] += b[i] - 48;
        if (a[i] > 57)
        {
            a[i] -= 10;
            if10 = true;
        }
    }
    if(if10)
        a += '1';
    std:: reverse(a.begin(), a.end());
    return a;
}
int main()
{
    string a, b, c;
    cin >> a;
    cin >> b;
    if (compare(a, b))
    {
        c = sum(a, b);
        cout << c << endl;
        c = minuss(a, b);
        cout << c;
    }
    else
    {
        c = sum(b, a);
        cout << c << endl;
        c = minuss(b, a);
        cout << c;
    }
}
