#include <iostream>
#include <string>
using namespace std;

int main() {
    string q1;
    string w1;
    string r;
    size_t po = 0, c = 0;
    setlocale(LC_ALL, "RU");

    cout << "Создайте программу, позволяющую находить в строке подстроку и заменять её на\n"
            "другую произвольную подстроку в каждом месте обнаружения." << endl;

    cout << "Введите главную строку" << endl;
    cin >> q1;
    cout << "Введите подстроку которую хотите заменить" << endl;
    cin >> w1;
    cout << "Введите на которую хотите заменить" << endl;
    cin >> r;
    while ((po = q1.find(w1, po)) != string::npos)
    {
        q1.replace(po, w1.size(), r);
        po += r.size();
        c++;
    }
    cout << q1 << endl << "Количество замен: " << c << endl;


    system("pause");

}