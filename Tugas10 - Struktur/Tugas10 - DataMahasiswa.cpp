#include <iostream>
#include <ionmanip>
#include <conio.h>
#include <stdio.h>

using namespace std;

struct data
{
    char nama[30], alamat[30], jk[30];
    int nomor,ttl,tlp;
};

int main()
{
    int nim = -1, i, j;
    int pilih;
    data siswa[30];
    char get[30];
    menuutama:
    system("cls");

    nim++
    cout << "Masukkan NIM               : ";
    cin >> siswa[nim].nomor;
    cin.getline(get,30);

    cout << "Nama                       : ";
    cin.getline(siswa[nim].nama,30);

    cout << "Tanggal Lahir (ddmmyyyy)   : ";
    cin >> siswa[nim].ttl;
    cin.getline(get,30);

    cout << "Jenis Kelamin              : ";
    cin.getline(siswa[nim].jk,30);

    cout << "Alamat                     : ";
    cin.getline(siswa[nim].alamat,30);

    cout << "No Telepon                 : ";
    cin >> siswa[nim].tlp;
    cin.getline(get,30);

    cout << "Ingin memasukkan data lagi? (1=ya / 2=tidak) : ";
    cin >> pilih;
    cout << endl;

    if(pilih==1)
    {
        goto menuutama;
    }
    else if(pilih==2)
    {
        goto tampilan;
    }
    tampilan:
    system("cls");
    cout.flags(ios::left);
    cout << setw(15) << "NIM            Nama            TTL(ddmmyyyy)   Jenis Kelamin   Alamat  Nomor Telepon\n";

    cout << "========================================================================================\n";
    for(j=0;j<=nim;j++)
    {
        cout << setiosflags(ios::left) << setw(14) << siswa[j].nomor;
        cout << setiosflags(ios::left) << setw(14) << siswa[j].nama;
        cout << setiosflags(ios::left) << setw(14) << siswa[j].ttl;
        cout << setiosflags(ios::left) << setw(14) << siswa[j].jk;
        cout << setiosflags(ios::left) << setw(14) << siswa[j].alamat;
        cout << setiosflags(ios::left) << setw(14) << siswa[j].tlp;
        cout << endl;
    }

    cout << endl;
    cout << "Apakah anda ingin ke menu utama? (1=ya / 2=tidak) : ";
    cin >> pilih;
    if(pilih==1)
    {
        goto menuutama;
    }
    else if(pilih==2)
    {
        goto keluar;
    }
    keluar:
    system("cls");
    cout << "Terima Kasih";
    return 0;

    getch();
    return 0;
}