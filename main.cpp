#include <iostream>
using namespace std;
int main()
{
    long long a, b = 1;
    cout << "Incert random number from 1 to 20 include:" << endl;
    cin >> a;
    for (long long i = a; i <= 20; i++)
    {
        b = i * b;
    }
    cout << "The product is: " << b << endl;
    return 0;
}