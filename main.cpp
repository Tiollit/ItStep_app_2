#include <iostream>
using namespace std;
int main()
{
    int a, b, c = 0;
    a = rand() % 500;
    cout << "Incert number from 0 to 500:" << endl;
    do
    {
        cin >> b;
        c = c + 1;
        if (b == 0)
        {
            cout << "End Game." << " Number of operations:" << c << endl;
            break;
        }
        else if (a > b)
        {
            cout << "Incerted number is less then generated." << " Number of operations:" << c << endl;
        }
        else if (a < b)
        {
            cout << "Incerted number is more then generated." << " Number of operations:" << c << endl;
        }
        else if (a == b)
        {
            cout << "You found right number." << " Number of operations:" << c << endl;
            break;
        }
    } while (true);  

    return 0;
}