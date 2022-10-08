#include <iostream>
using namespace std;
int main()
{
    int c = 1, d = 1, x, y;
    cout << "Insert 2 numbers X and Y:" << endl;
    cin >> x >> y;
    for (int i = 0; i < y; i++)
    {
        c = c * x;
        d = d * y;
    }
    cout << "x = " << c << " ; y = " << d << endl;
    return 0;
}