#include <iostream>
using namespace std;
int main()
{
    double a, c, d;
    int b;
    cout << "Enter your sum and choose your exchanging tipe:" << endl;
    cout << "1 for USD to UA and back: 1 USD = 45 UA" << endl;
    cout << "2 for USD to CAD and back: 1 USD = 1,33 CAD" << endl;
    cout << "3 for USD to PLN and back: 1 USD = 5 PLN" << endl;
    cout << "4 for USD to EURO and back: 1 USD = 0,95 EURO" << endl;
    cin >> a >> b;
    cout << endl;
    switch (b) {
    case 1: 
        c = a * 45;
        d = a / 45;
        cout << c << " UA" << endl;
        cout << d << " USD" << endl;
        break;
    case 2:
        c = a * 1.33;
        d = a / 1.33;
        cout << c << " CAD" << endl;
        cout << d << " USD" << endl;
        break;
    case 3:
        c = a * 5;
        d = a / 5;
        cout << c << " PLN" << endl;
        cout << d << " USD" << endl;
        break;
    case 4:
        c = a * 0.95;
        d = a / 0.95;
        cout << c << " EURO" << endl;
        cout << d << " USD" << endl;
        break;
    default:
        break;
    }
    return 0;
}