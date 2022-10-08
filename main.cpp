#include <iostream>
using namespace std;
int main()
{
    int a, b = 0;
    cout << "Incert number:" << endl;
    cin >> a;

    for (int i = a; i < 500; i++)
    {
        b = b + a;
    }
    cout << b << endl;

    return 0;
}