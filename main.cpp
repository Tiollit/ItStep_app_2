#include <iostream>
using namespace std;
int main()
{
    int a, b, m, n, c = 0;
    cout << "Incert numbers A B:" << endl;
    cin >> a >> b;
    if (a > b)
    {
        m = b;
        n = a;
        b = n;
        a = m;
    }
    for (int i = a; i < b; i++)
    {
        c = c + i;
    }
    cout << c;
    return 0;
}