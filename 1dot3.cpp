#include <iostream>

using namespace std;

int main() {


    setlocale(LC_ALL, "RU");
    cout << "Расчет определителя матрицы, матрица размером 3 на 3 Ввод чисел построчно.\n"
            "Числа только целые.\n\n";
    int a[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Введите число:";
            cin >> a[i][j];
        }
    }
    int b = a[0][0] * a[1][1] * a[2][2] + a[0][1] * a[1][2] * a[2][0] + a[0][2] * a[1][0] *a[2][1] -
            a[0][2] * a[1][1] * a[2][0] - a[0][0] * a[1][2] * a[2][1] - a[0][1] * a[1][0] * a[2][2];

    cout << "Определитель  = " << b << endl;


    system("pause");

}
