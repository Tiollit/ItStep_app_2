#include <iostream>
using namespace std;
int main()
{
    int a, b, m, n;
    cout << "Incert A B:" << endl;
    cin >> a >> b;
    if (a > b)
    {
        m = b;
        n = a;
        b = n;
        a = m;     
    }
    cout << endl;
    cout << "unpaired" << endl;
    for (int i = a; i <= b; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << "\t";
        }        
    }
    cout << endl;
    cout << "paired" << endl;
    for (int i = a; i <= b; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << "\t";
        }
    }
    cout << endl;
    cout << "multiples 7" << endl;
    for (int i = a; i <= b; i++)
    {
        if (i % 7 == 0)
        {
            cout << i << "\t";
        }
    }          
    return 0;
}