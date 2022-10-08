#include <iostream>
using namespace std;
int main()
{    
    int a, c = 0;
    cout << "Incert numbers:" << endl;
    do
    {
        cin >> a;
        c = c + a;
    } while (a != 0);
    cout << c;
    return 0;
}