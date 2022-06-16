#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
#include <cstdlib>

using namespace std;

void garis();

float awal()
{
    cout << endl << endl;
    cout << "                   LAPORAN NILAI PEMROGRAMAN C++" << endl;
    cout << "               UNIVERSITAS SINGAPERBANGSA KARAWANG\n" << endl;
}

float isi()
{
    garis();
    cout << "No.    NPM                     Nama                Nilai " << endl;
    cout << "                               Mahasiswa  ---------------------------------------------- Grade" << endl;
    cout << "                                               UTS     UAS     ABSEN   TUGAS   AKHIR " << endl;
    garis();
}

void garis()
{
    cout << "===============================================================================================" << endl;
}

main(int argc, char *argv[])
{
    int a;
    int jumlah;
    float uts[20];
    float uas[20];
    float absen[20];
    float tugas[20];
    float akhir[20];
    char nama[50][50];
    char npm[50][50];
    char grade[20];
    char ulang;

    do
    {
        cout << "Jumlah Data    : "; cin >> jumlah;
        cout << endl;
        grais();

        for(a=1;a<=jumlah;a++)
        {
            cout << "\nMahasiswa ke-" << a << endl;
            cout << "NPM                : "; cin >> npm[a];
            cout << "Nama               : "; cin >> nama[a];
            cout << "Nilai UTS          : "; cin >> uts[a];
            cout << "Nilai UAS          : "; cin >> uas[a];
            cout << "Nilai Absen        : "; cin >> absen[a];
            cout << "Nilai Tugas        : "; cin >> tugas[a];

            akhir[a]=((30*uts[a])/100)+((40*uas[a])/100)+((20*tugas[a])/100);

        }

        awal();
        cout << endl;
        isi();
        for(a=1;a<=jumlah;a++)
        {
            cout << setiosflags(ios::left) << " " << setw(6) << a;
            cout << setiosflags(ios::left) << " " << setw(19) << npm[a];
            cout << setiosflags(ios::left) << " " << setw(15) << nama[a];
            cout << setiosflags(ios::left) << " " << setw(7) << uts[a];
            cout << setiosflags(ios::left) << " " << setw(7) << uas[a];
            cout << setiosflags(ios::left) << " " << setw(7) << absen[a];
            cout << setiosflags(ios::left) << " " << setw(8) << tugas[a];
            cout << setiosflags(ios::left) << " " << setw(8) << akhir[a];

        if(akhir[a]>=80)
            cout << setprecision(4) << " " << "A";
        else
        if(akhir[a]>=70)
            cout << setprecision(4) << " " << "B";
        else
        if(akhir[a]>=59)
            cout << setprecision(4) << " " << "C";
        else
        if(akhir[a]>=50)
            cout << setprecision(4) << " " << "D";
        else
        if(akhir[a]<50)
            cout << setprecision(4) << " " << "E";
        else
        cout << setprecision(4) << " " << "E";
        }
        garis();
        garis();
        cout << endl << endl;
        cout << "Ulang Kembali (Y/T)? "; cin >> ulang;
        system("cls");
    }
    while ((ulang=='Y')||(ulang=='y'));
    cout << endl << endl;
}