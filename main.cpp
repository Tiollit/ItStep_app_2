#include <iostream> //���������� ������� ���� ����� �. �������� �� ���������, �� ��� ���� ���� ����� ����� ������� �* �.
#include <cmath>
using namespace std;
int main()
{
    int a, b, d = 0, e, c = 1, n = 1, p, f;
    cout << "Incert random number:" << endl;
    cin >> a;
    e = a; f = a;
    while ((e /= 10) > 0) n++;                        // n - ������� ���� � ����
    // cout << n; 
    p = n - 1;
    for (int i = n; i > 0; i--)
    {
        for (int k = p; k >= 0; k--)
        {
            c = c * 10;
        }
        b = a / c;                                     // ������� ���� �����
        d = d + b;                                     // ���� ����
        a = a - b * c;                                 // �������� ������� ���� ����� 
        p = p - 1;
        c = 1;
    }
    if (a < 10) d = d + a;                             // ������ ������� ������ �����
    cout << "sum: " << d << endl;
    if (pow(d, 3) == pow(f, 2)) cout << "True";
    else cout << "False";

    return 0;
}