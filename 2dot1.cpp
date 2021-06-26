#include <iostream>
#include <string>
using namespace std;
void input(string& z) {
    cout << "Введите строку" << endl;
    cin >> z;
}

void output(string z) {
    cout << "Ведённая строка - " << z << endl;
    int n = 1;
    string t;
    string str;
    char p = z[0];
    for (int i = 1; i < z.length() + 1; i++) {
        if (p == z[i]) {
            n++;
        }
        else
        {
            if (n > 1) {
                t = t + to_string(n) + p;
            }
            else
            {
                t = t + p;
            }
            n = 1;
            p = z[i];
        }
    }
    cout << "Сжатая строка - " << t << endl;
}
int main() {

    string(z);
    setlocale(LC_ALL, "RU");
    cout << "Создайте функцию, которая организует простейшей сжатие входящей символьной\n"
            "строки произвольного масштаба. Сжатие происходит по следующему принципу:\n"
            "если в строке есть последовательность повторяющихся символов, то она\n"
            "заменяется на пару код символа и количество его повтора в строчке. Обеспечьте\n"
            "возможность ввода строки с клавиатуры." << endl;
    input(z);
    output(z);
}