#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    double a, b, h;
    cout << "Введіть значення a: ";
    cin >> a;
    cout << "Введіть значення b: ";
    cin >> b;
    cout << "Введіть крок h: ";
    cin >> h;
    cout << setw(4) << "X" << setw(10) << "Y" << endl;
    for (double x = a; x <= b; x += h) {
        if (x < a || x > b) {
            cout << "Значення x не належить ОДЗ." << endl;
            break;
        }
        у = f(x)
        double y = /* Функція f(x) */;
        cout << setw(4) << x << setw(10) << y << endl;
    }
    return 0;
}
