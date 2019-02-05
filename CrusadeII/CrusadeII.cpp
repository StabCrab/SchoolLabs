//
// минимальное произведение 2-х чисел, не кратное 2.
//

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int minp1 = INT_MAX, minp2 = INT_MAX; // minp1 и minp2- минимальные положительные числа
    int minn = INT_MAX, maxp = INT_MAX + 1; // minn - наименьшее отрицательное число, maxp -наибольшее положительное
    int maxn1 = INT_MAX + 1, maxn2 = INT_MAX + 1; // maxn1 и maxn2 - наибольшие отрицательные числа
    int hans, cans = INT_MAX; // hans - вывод руками cans - вывод, подсчитанный компьютером
    int temp; // вводимое число
    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (temp % 2 == 0) // так как нам нужно минимальное нечетное произведение, то множители нем могут быть четными
            continue;
        if (temp > maxp && temp > 0) // всего возможно 3 случая - когда есть и положительные, и отрицательные числа, тогда нам нужно одно наименьшее и одно наибольшее число
            maxp = temp;
        if (temp < minn && temp < 0)
            minn = temp; // нашли
        if (temp <= minp1 && temp > 0)  // все числа положительны - 2 наименьших числа
        {
            if (temp < minp2 && temp) {
                minp1 = minp2;
                minp2 = temp;
            } else
                minp1 = temp;
        } // нашли
        if (temp >= maxn2 && temp < 0) // все числа отрицательны - два наибольших числа
        {
            if (temp > maxn1) {
                maxn2 = maxn1;
                maxn1 = temp;
            } else
                maxn2 = temp;
        } // нашли
    }
    cin >> hans;
    if (maxp == INT_MAX + 1) {
        cans = maxn1 * maxn2; //  находим ответ при случае когда есть только отрицательные числа
    }
    if (minn == INT_MAX) {
        cans = minp1 * minp2; // находим ответ при случае когда все числа положительны
    }
    if (minn != INT_MAX &&
        maxp != INT_MAX + 1) // находим ответ при случае когда есть и отрицательные и положительные числа
    {
        cans = minn * maxp;
    }
    if (cans == INT_MAX || cans == INT_MAX + 1 || (maxp == INT_MAX + 1 && minn == INT_MAX)) // вывод в случае если ответ не может быть сформирован
    {
        if (hans == -1) {
            cout << -1 << endl;
            cout << "YES";
        } else {
            cout << -1 << endl;
            cout << "NO";
        }
    } else {
        if (hans == cans) {
            cout << cans << endl;
            cout << "YES";
        } else {
            cout << cans << endl;
            cout << "NO";
        }
    }

}