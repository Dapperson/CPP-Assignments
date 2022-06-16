#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int kode;
    char huruf,ulang;
    cout<<" CEK KETERSEDIAN MINUMAN TOKO "<<endl;
    do
    {
        cout<<"Pilih Jenis Minuman : "<<endl;
        cout<<" 1. ISOTONIK"<<endl;
        cout<<" 2. BERSODA"<<endl;
        cout<<"Masukkan Kode : ";
        cin>>kode;
        switch (kode)
        {
        case 1:
            cout<<"\nDaftar Minuman "<<endl;
            cout<<" a. POCARI SWEAT"<<endl;
            cout<<" b. MIZONE"<<endl;
            cout<<" c. ISOPLUS"<<endl;
            cout<<" d. AQUARIUS"<<endl;
            cout<<"Masukkan kode (a/b/c/d) : ";
            cin>>huruf;
            switch(huruf)
            {
            case'a':
                    cout<<"\nStok Tersedia = 30"<<endl;
                break;
            case'b':
                    cout<<"\nStok Tersedia = 41"<<endl;
                break;
            case'c':
                    cout<<"\nStok Tersedia = 40"<<endl;
                break;
            case'd':
                    cout<<"\nStok Tersedia = 41"<<endl;
                break;
            }
            break;
        case 2:
            cout<<"\nDaftar Minuman "<<endl;
            cout<<" a. COCA-COLA"<<endl;
            cout<<" b. SPRIT"<<endl;
            cout<<" c. FANTA"<<endl;
            cout<<" d. PEPSI"<<endl;
            cout<<"Masukkan kode (a/b/c/d) : ";
            cin>>huruf;
            switch(huruf)
            {
            case'a':
                    cout<<"\nStok Tersedia = 41"<<endl;
                break;
            case'b':
                    cout<<"\nStok Tersedia = 40"<<endl;
                break;
            case'c':
                    cout<<"\nStok Tersedia = 31"<<endl;
                break;
            case'd':
                    cout<<"\nStok Tersedia = 30"<<endl;
                break;
            }
            break;
        }
        cout<<"\nIngin memeriksa stok tersedia lagi? [Y/T]";
        cin>>ulang;
    }
    while(ulang=='y'||ulang=='Y');
    getch();
}


