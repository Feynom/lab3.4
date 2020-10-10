
#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x, y, r, a, b, c, d, f;

    cout << "Введіть значення 'x':";
    cin >> x;
    cout << endl;
    cout << "Введіть значення 'y':";
    cin >> y;
    cout << endl;
    cout << "Введіть значення 'r':";
    cin >> r;
    cout << endl;

    a = pow((x + r), 2) + pow((y - r), 2) <= r * r;
    b = x >= 0;
    c = x <= 2 * r;
    d = y >= -r;
    f = y <= 0;

    if (a || (b && c && d && f))
        cout << "Так!" << endl;
    else
        cout << "Ні!" << endl;

    cin.get();
    return 0;
}