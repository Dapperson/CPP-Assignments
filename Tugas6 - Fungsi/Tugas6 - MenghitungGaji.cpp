#include <iostream>
#include <conio.h>

using namespace std;

int jml,gp,lem,mkn,trans,ut;
char nm[50],nip[30];
void garis();
void pokok();
void lembur();
void makan();
void transport();
void upahtotal();

int main()

{
    cout << "\n             GAJI HARIAN PT.XYZ              " << endl << endl;
    cout << "Masukkan NIP       : "; cin >> nip;
    cout << "Masukkan Nama      : "; cin >> nm;
    cout << "Jumlah Jam Kerja   : "; cin >> jml;
    garis();
    cout << "NIP                : " << nip;
    cout <<"\nNama              : " << nm;
    pokok();
    lembur();
    makan();
    transport();
    garis();
    upahtotal();
    
    getch();
}

void garis()
{
    cout << "===================================" << endl;
}

void pokok()
{
    gp = 2000*jml;
    cout << "\nGaji Pokok           : " << gp << endl;
}

void lembur()
{
    if(jml>7)
    lem = 1.5*gp;
    cout << "Lembur             : " << lem << endl;
}

void makan()
{
    mkn = 3500;
    if(jml<=7)
    {
        cout << "Uang Makan         : 0" << endl;
    }
    else if(jml>7)
    {
        cout << "Uang Makan         : " << mkn << endl;
    }
}

void transport()
{
    trans = 4000;
    if(jml<=8)
    {
        cout << "Transport Lembur : 0" << endl;
    }
    else if(jml>9)
    {
        cout << "Transport Lembut : " << trans << endl;
    }
}

void upahtotal()
{
    ut = gp + lem + mkn + trans;
    cout << "Upah Total         : " << ut << endl;
}