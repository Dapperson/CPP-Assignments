#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    float sudut, kecepatan, rad, jarak;
    const float phi = 3.14;
    const float gravitasi = 9.8;
    cout << "\n Menghitung Jarak Jatuh Peluru" << endl << endl;
    cout << " Masukkan Sudut Penembakan (derajat) = "; cin >> sudut;
    cout << " Masukkan Kecepatan Tembak (m/s) = "; cin >> kecepatan;
    rad = sudut*phi/180;
    jarak = 2*pow(kecepatan,2)*sin(rad)/gravitasi;
    cout << " Jadi, peluru jatuh pada jarak = " << jarak << " meter" << endl;

    getch();
}