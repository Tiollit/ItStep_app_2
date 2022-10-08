#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d = 0;
    for (int i = 100; i <= 999; i++)
    {
        a = i / 100;                   // число сотень
        b = (i - a*100) / 10;          // число десятків
        c = i - a*100 - b*10;          // число одиниць
        if (a == b || a == c || b == c) d = d + 1;       
    }
    cout << "Count of numbers with 2 same symbols is: " << d << endl;
    
    return 0;
}