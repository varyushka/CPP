#include <iostream>
using namespace std;
int main() {
    int ApartNum;    
    cout << "Введіть номер квартири: ";
    cin >> ApartNum;
    switch (ApartNum) {
        case 1:
            cout << "Кількість кімнат: 1, Кількість жителів: 1" <<endl;
            break;
        case 2:
            cout << "Кількість кімнат: 2, Кількість жителів: 2" <<endl;
            break;
        case 3:
           cout << "Кількість кімнат: 3, Кількість жителів: 3" <<endl;
            break;
        case 4:
            cout << "Кількість кімнат: 4, Кількість жителів: 4" <<endl;
            break;
        case 5:
            cout << "Кількість кімнат: 3, Кількість жителів: 5" <<endl;
            break;
        case 6:
            cout << "Кількість кімнат: 2, Кількість жителів: 6" <<endl;
            break;
        case 7:
            cout << "Кількість кімнат: 1, Кількість жителів: 7" <<endl;
            break;
        default:
            cout << "Такої квартири не існує" <<endl;
            break;
    }

    return 0;
}