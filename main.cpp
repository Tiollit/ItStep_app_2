#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d = 0, e = 0;
    for (int i = 100; i <= 999; i++)
    {
        a = i / 100;                   // ����� ������
        b = (i - a*100) / 10;          // ����� �������
        c = i - a*100 - b*10;          // ����� �������
        if (a == b || a == c || b == c) d = d + 1;       // ����� ���� �� ���� � 2 ����� �������
        if (a == b && b == c && a == c) e = e + 1;       // ����� ���� �� �� 3 ����� ������� (�� ������ 9 - ��� ����� �������� �����)
    } 

    cout << "Count of numbers with at least 2 same symbols is: " << d << endl;
    cout << "Count of numbers with only 2 same symbols is: " << d - e << endl;
    
    return 0;
}