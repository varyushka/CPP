#include <iostream>
using namespace std;
int main() {
    for (int num = 1000; num <= 9999; ++num) {
        int a1 = num / 100; // Взяти перші дві цифри числа
        int a2 = num % 100; // Взяти останні дві цифри числа
        
        if (a1 == a2) {
            cout << num << endl;
        }
    }

    return 0;
}