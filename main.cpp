#include <iostream>
using namespace std;
int main()
{
    int a, b, c = 0;
    cout << "Incert numbers A B:" << endl;
    cin >> a >> b;
    for (int i = a; i < b; i++)
    {
        c = c + i;
    }
    cout << c;
    return 0;
}