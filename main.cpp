#include <iostream>
using namespace std;
int main()
{
    int a, b, d = 0, e, c = 1, n = 1, p;
    cout << "Incert random number:" << endl;
    cin >> a;
    e = a;
    while ((e /= 10) > 0) n++;                        // n - кількість цифр в числі
    // cout << n; 
    p = n - 1;
    for (int i = n; i > 0; i--)
    {        
        for (int k = p; k >= 0; k--)
        {
            c = c * 10;                            
        }                                   
        b = a / c;                                    // перша цифра числа і перевірка останньої
        if (b == 3 || b == 6) d = d / 10;             // прибираємо цифру якщо вона = 3 або 6 і скорочуємо на 1 знак вправо           
        else d = d + b * c;                                         
        a = a - b * c;                                // забираємо першу цифру   
        p = p - 1;
        c = 1;
        if (a < 10 && a != 6 && a != 3) d = d + a;    
        else if (a < 10 && a == 3) d = d / 10;
        else if (a < 10 && a == 6) d = d / 10;
    }
    cout << "New number is: " << d << endl;
    return 0;
}