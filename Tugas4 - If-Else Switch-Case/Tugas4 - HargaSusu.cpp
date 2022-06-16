#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int kode,jumlah;
    char ukuran;
    float harga,totalbayar;

    cout << "\n Masukkan Kode Susu(1-3)     : "; cin >> kode;
    cout << " Masukkan Jumlah Pembelian     : "; cin >> jumlah;
    cout << " Masikkan Ukuran (B/S/K)       : "; cin >> ukuran;

    switch (kode)
    {
    case 1:
        cout << "\n Susu Dancow" << endl;
        switch (ukuran)
        {
        case 'B':
            harga = 10000;
            break;
        case 'S':
            harga = 4250;
            break;
        case 'K':
            harga = 2100;
            break;
        }
        break;

    case 2:
        cout << "\n Susu Indomilk" << endl;
        switch (ukuran)
        {
        case 'B':
            harga = 8500;
            break;
        case 'S':
            harga = 4000;
            break;
        case 'K':
            harga = 2025;
            break;
        }
        break;
    
    case 3:
        cout << "\n Susu Sustacal" << endl;
        switch (ukuran)
        {
        case 'B':
            harga = 17000;
            break;
        case 'S':
            harga = 14500;
            break;
        case 'K':
            harga = 8300;
            break;
        }
        break;
    }
    cout << "Harga Susu Rp. " << harga << endl;
    totalbayar = jumlah*harga;
    cout << "Jumlah Pembelian Rp. " << totalbayar;

    getch();
}