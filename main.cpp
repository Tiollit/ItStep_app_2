#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d = 0, e = 0;
    for (int i = 100; i <= 999; i++)
    {
        a = i / 100;                   // число сотень
        b = (i - a*100) / 10;          // число десятків
        c = i - a*100 - b*10;          // число одиниць
        if (a == b || a == c || b == c) d = d + 1;       // число цифр де хоча б 2 цифри однакові
        if (a == b && b == c && a == c) e = e + 1;       // число цифр де всі 3 цифри однакові (їх всього 9 - але можна записати кодом)
    } 

    cout << "Count of numbers with at least 2 same symbols is: " << d << endl;
    cout << "Count of numbers with only 2 same symbols is: " << d - e << endl;
    
    return 0;
}