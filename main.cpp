#include <iostream>
using namespace std;
int main()
{

    //----------------Пред-перевірки--------------
    /*int size;
    cout << "=>";
    cin >> size;
    int i = size;*/
    /*while(i < 10)
    {
        cout << "* ";
        i++;
    }*/
    //----------------Пост-перевірки---------------
    //int age;
    ////
    //do
    //{
    //  system("cls");
    //  cout << "Enter your age: ";
    //  cin >> age;
    //  /*if (age >= 18)
    //  {
    //      cout << "Sucsses!" << endl;
    //      system("pause");
    //      break;
    //  }
    //  else
    //  {
    //      cout << "Error! Incorect age: Your age must be more 18+" << endl;
    //      system("pause");
    //  }*/
    //  
    //} while (age < 18);
    //system("cls");
    //cout << "Exit..." << endl;
    //----------------Пошаговий---------------
    for (int i = 0; i < 10; i += 3)
    {
        cout << i << "\t";
    }
    cout << endl;
    return 0;
}