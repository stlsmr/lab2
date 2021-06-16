#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    cout<< "Написать программу, которая заменяет все четные числа в целочисленном\n"
           "статическом массиве на 0 (массив из 10 элементов)"<< endl;
    int a[9];
    cout << "Введите число: " << endl;
    for (int i = 0; i < 9; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
            a[i] = 0;
    }
    for (int i = 0; i < 9; i++)
        cout << a[i] << " ";
}