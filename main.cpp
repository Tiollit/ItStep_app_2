#include <iostream>
using namespace std;
int main()
{
    int a = 0, b;
    for (int i = 0; i <= 1000; i++)
    {
        a = a + i;
    }
    b = a / 1001;
    cout << "Arithmetic mean for numbers from 0 to 1000 is: " << b << endl;
    return 0;
}