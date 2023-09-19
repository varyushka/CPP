#include <iostream>
#include <string>
using namespace std;
int main()
{
    setlocale(LC_TYPE, "ukr");
    int x;
    int b;
    int a;
    int c;
    double result;
    cout << "Введіть значення x ";
    cin >> x;
    cout << "Введіть значення a ";
    cin >> a;
    cout << "Введіть значення b ";
    cin >> b;
    cout << "Введіть значення c ";
    cin >> c;
    if (x >= 1.5)
    {
        result = ((pow(x, 3) + (3 * a)) * c) / (a - b + x);
    }
    if (x < 1.5)
    {
        result = pow(sin(a), 2) * pow(sin(b), 2);
    }
    cout << "Result: " << w;
}
