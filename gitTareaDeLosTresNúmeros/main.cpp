#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cin >> a;
    cin >> b;
    cin >> c;
    if (a>b)
        if (b>c)
            cout << c << " es el menor n�mero ingresado" << endl;
        else
            cout << b << " es el menor n�mero ingresado" << endl;
    else if (a>c)
        cout << c << " es el menor n�mero ingresado" << endl;
    else
        cout << a << " es el menor n�mero ingresado" << endl;
}
