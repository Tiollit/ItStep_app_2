#include <iostream> // ���������� ������� ��� ����� �����. ��������� ������� �� ��� �����, �� �� ������ ������ ����� ������� ��� �������
using namespace std;
int main()
{
    int c, d;
    double a, b, e, f, g, h;
    cout << "Incert 2 random numbers: " << endl;
    cin >> a >> b;
    for (int i = 1; i <= a; i++)                     // ���� �������� � �� � �����
    {
        c = a / i;
        d = b / i;
        e = a / i;
        f = b / i;
        g = e - c;
        h = f - d;
        if (g == 0 && h == 0) cout << i << " ";
    }
    return 0;
}