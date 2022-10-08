#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Incert number of variant:" << endl;
    cin >> a;
    for (int i = 0; i <= 9; i++)
    {
        cout << a << " x " << i << " = " << a * i << " ;" << endl;
    }
    return 0;
}