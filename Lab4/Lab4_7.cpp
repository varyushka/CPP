#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    float value1 = 2.32f;
    float value2 = 2.3f;
    float value3 = 2.123456f;
    float value4 = 2.123456f;
    float value5 = 2.123456f;
    printf("%.2f%.2f\n", value1, value2);
    printf("%.6f%.2f\n", value3, value4);
    printf("%.2f\n", value5);
    return 0;
}