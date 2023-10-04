#include <iostream>
using namespace std;
int main() {
    int a= 1; 
    for (int i = 10; i <= 99; i += 2) {
        a*= i; }
    cout << "Добуток всіх парних двозначних чисел: " << a<< endl;
    return 0;
}
