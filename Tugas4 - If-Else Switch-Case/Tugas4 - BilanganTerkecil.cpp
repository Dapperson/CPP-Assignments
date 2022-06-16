#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int a,b,c,d,terkecil;
    cout << "\n Masukkan Bilangan 1 : "; cin >> a;
    cout << " Masukkan Bilangan 1 : "; cin >> b;
    cout << " Masukkan Bilangan 1 : "; cin >> c;
    cout << " Masukkan Bilangan 1 : "; cin >> d;
    terkecil = a;
    if(b < terkecil){terkecil = b;}
    if(c < terkecil){terkecil = c;}
    if(d < terkecil){terkecil = d;}
    cout << " Bilangan terkecil adalah : " << terkecil;

    getch();
}