#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int num1, num2;
    cout << "Enter the first integer number: ";
    cin >> num1;
    cout << "Enter the second integer number: ";
    cin >> num2;
    float result1 = 1.0f / static_cast<float>(num1);
    float result2 = 1.0f / static_cast<float>(num2);
    float epsilon = 0.000001f;
    if (abs(result1 - result2) <= epsilon) {
        cout << "Results are equal (by 0.000001 epsilon)" <<endl;
    } else {
        cout << "Results are not equal" <<endl;
    }
    return 0;
}