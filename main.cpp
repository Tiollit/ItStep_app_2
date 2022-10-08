#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d = 0;
    for (int i = 100; i <= 999; i++)
    {
        a = i / 100;
        b = (i - a * 100) / 10;
        c = i - a * 100 - b * 10;
        if (a != b && a != c && b!= c) d = d + 1;     
    }
    cout << "Count of numbers with all different symbols is: " << d << endl;

    return 0;
}