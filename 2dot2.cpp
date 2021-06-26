#include <iostream>
#include <string>
using namespace std;

void sort(int* m, int n)
{
    int i, j, k = 0, t = 0;
    for (i = 0; i < n - 1; i++)
    {
        k = i + 1;
        t = m[k];
        for (j = i + 1; j > 0; j--)
        {
            if (t < m[j - 1])
            {
                m[j] = m[j - 1];
                k = j - 1;
            }
        }
        m[k] = t;
    }
    cout << endl << "Полученный массив: ";
    for (i = 0; i < n; i++)
        cout << m[i] << " ";
    cout << endl;
}
int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Реализуйте сортировку массива вставками (массив из целых чисел)" << endl;
    cout << "Введите количество элементов" << endl;
    cin >> n;
    int *mas = new int[n];
    for (int i = 0; i < n; i++) {
        cout << i + 1 << " элемент - ";
        cin >> mas[i];
    }
    sort(mas, n);
    delete[] mas;
}
