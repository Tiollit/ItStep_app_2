#include <iostream>
using namespace std;
int main()
{
    int a, b, d, e, c = 1, n = 1;
    cout << "Incert random number:" << endl;
    cin >> a;
    e = a; d = a;
    while ((e /= 10) > 0) n++;                 // n - ������� ���� � ����
    // cout << n;    
    for (int i = n; i >= 0; i--)
    {
        for (int k = n; k >= 0; k--)
        {
            c = c * 10;                            
        }
        b = a / c;                             // ����� ����� �����
        if (b == 3 || b == 6) d = d - b * c;   // ��������� ����� ���� ���� = 3 ��� 6 ��� �������� 0
        a = a - b * c;                         // �������� ����� �����
        c = 1;
        n = n - 1;
    }
    cout << "New number is: " << d << endl;
    return 0;
}