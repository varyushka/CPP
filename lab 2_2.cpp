#include <iostream>
#include <string>
using namespace std;
int main() {
setlocale(LC_TYPE, "ukr");
    double x, y;
    cout << "Введіть координати точки (x,y): ";
    cin >> x >> y;
    if ((x >= -1 && x <= 1) && (y >= -1 && y <= 1)) {
        cout << "Точка знаходиться в заштрихованій області.";
    } 
    else {
        cout << "Точка не знаходиться в заштрихованій області.";
    }
}