#include <iostream>
using namespace std;
int FindNOD(int a, int b)
{
    while (a != 0 && b!= 0) {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    return a + b;
}
int FindNOK(int a, int b)
{
    int NOK = FindNOD(a, b);
    while (NOK % a == 0 && NOK % b ==0)
    {
        NOK+= NOK;
    }
    cout << a;
}
int main()
    {
    int n;
    int a, b;
    cin >> n; // Вводим количество чисел
    cin >> a; // Вводим первое число
    for (int i = 0; i < n - 1; i++) // Цикл(Заметь, что у нас n-1 проход)
    {
        cin >> b; // Вводим последнее число в паре
        a = FindNOK(a, b); //как-то обрабатываем
        a = b; // второе число в паре становится первым, а второе мы введем в следующем проходе(В задаче про поиск НОКа это не нужно было)
    }
    cout << a;
}