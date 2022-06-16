#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int No;
    cout << "\n Menu Restaurant Mc'Yahud" << endl;
    cout << "1.Nasi Goreng Informatika      Rp.5000,-\n";
    cout << "2.Nasi Soto Ayam Internet      Rp.7000,-\n";
    cout << "3.Gado-Gado Disket             Rp.4500,-\n";
    cout << "4.Bubur Ayam LAN               Rp.4000,-\n";
    cout << " Masukkan Pilihan Anda!..."; cin >> No;
    if (No==1) cout << " Pilihan No1.Nasi Goreng Informatika    Rp.5000,-" << endl;
    else
    if (No==2) cout << " Pilihan No2.Nasi Soto Ayam Internet    Rp.7000,-" << endl;
    else
    if (No==3) cout << " Pilihan No3.Gado-Gado Disket           Rp.4500,-" << endl;
    else
    if (No==4) cout << " Pilihan No4.Bubur Ayam LAN             Rp.5000,-" << endl;
    else 
    cout << " Pilihan Anda Salah" << endl;

    getch();
}    