#include <iostream>
using namespace std;
int main()
{
    int a, b, d = 0, e, c = 1, n = 1, p;
    cout << "Incert random number:" << endl;
    cin >> a;
    e = a;
    while ((e /= 10) > 0) n++;                        // n - ������� ���� � ����
    // cout << n; 
    p = n - 1;
    for (int i = n; i > 0; i--)
    {        
        for (int k = p; k >= 0; k--)
        {
            c = c * 10;                            
        }                                   
        b = a / c;                                    // ����� ����� ����� � �������� ��������
        if (b == 3 || b == 6) d = d / 10;             // ��������� ����� ���� ���� = 3 ��� 6 � ��������� �� 1 ���� ������           
        else d = d + b * c;                                         
        a = a - b * c;                                // �������� ����� �����   
        p = p - 1;
        c = 1;
        if (a < 10 && a != 6 && a != 3) d = d + a;    
        else if (a < 10 && a == 3) d = d / 10;
        else if (a < 10 && a == 6) d = d / 10;
    }
    cout << "New number is: " << d << endl;
    return 0;
}