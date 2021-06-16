#include <iostream>
#include <string>

using namespace std;

char cinChar()
{
    string sym;
    while (1)
    {
        cout << "Введите символ ";
        cin >> sym;
        if (sym.size() == 1 && isascii((int)sym[0]))
            return sym[0];
        else
            cout << "Введите еще раз\n";
    }
}

int main()
{
    setlocale(LC_ALL, "RU");
    cout<< "Ввод символа с клавиатуры (с проверкой что это именно символ), ввод строки с\n"
           "клавиатуры (с проверкой что это именно строка). Вывод в консоль номера,\n"
           "который символ занимает в строке, если он там есть. Если нет — вывод\n"
           "сообщения об отсутствии символа.\n";
    char sb;
    char *str;
    sb = cinChar();
    cout << "Введите строку ";
    cin >> str;
    if (!strchr(str, sb))
    {
        cout << "Нет тут такого символа " << sb;
        return 0;
    }
    cout << "Позиция введенного символа - " << strchr(str, sb) - str + 1;
    return 0;
}