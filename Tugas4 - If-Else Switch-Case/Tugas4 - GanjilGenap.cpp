#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    cout << "\n Mauskkan Angka:";
    int Bilangan;
    cin >> Bilangan;
    if (Bilangan%2==0)
    cout << " Bilangan Genap";
    else
    cout << " Bilangan Ganjil";
    getch();
}