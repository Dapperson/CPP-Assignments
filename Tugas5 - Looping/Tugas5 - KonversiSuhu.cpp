#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

main()
{
    float C,R,F;
    char lagi;
    cout << "\n Konversi Suhu\n\n";
    do
    {
        printf(" Celcius            Reamur          Fahrenheit\n");
        for(C=0;C<=100;)
        {
            R=C*4/5;
            F=C*9/5+32;
            printf("%8.3f           %8.3f           %8.f",C,R,F);
            C+=10;
        }
        system("pause");
        cout << "Hitung Lagi Y/T? \n";
        cin >> lagi;
    }
    while (lagi=='y'||lagi=='Y');
    return 0;
}