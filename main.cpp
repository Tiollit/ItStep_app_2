#include <iostream> //���������� ������� ���� �����. ��������� ������� �� ��� �����, �� �� ������ ����� ������� ��� �������
using namespace std;
int main()
{
    int b;
    double c, d, a;
    cout << "Incert number: " << endl;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        b = a / i;
        c = a / i;
        d = c - b;
        if (d == 0) cout << i << " ";
    }

    return 0;
}