#include <iostream> //���������� ������� ����-��� ���� ����� �. ��������� ������� �� ��� ����� �, ��� ���� � ������� ��� ������� �� �* � � �� ������� ��� ������� �� �* �* �
#include <cmath>
using namespace std;
int main()
{
    int a, b;
    double c, d;
    cout << "Incern number:" << endl;
    cin >> a;
    cout << "First line of numbers: " << endl;
    for (int i = 1; i < a; i++)
    {
        b = a / (pow(i,2));
        c = a / (pow(i,2));
        d = c - b;
        if (d == 0) cout << i << " ";        
    }
    cout << endl;
    cout << "Second line of numbers: " << endl;
    for (int i = 1; i < a; i++)
    {
        b = a / (pow(i,3));
        c = a / (pow(i,3));
        d = c - b;
        if (d > 0) cout << i << " ";
    }
    return 0;
}