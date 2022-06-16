#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int phi = 3.14, r = 10, k,l,i;
    cout << "\n Hitunglah: \n a. Keliling Bola      = 2.phi.r\n b.Luas Permukaan Bola       = 4/3.phi.r^2\n c.Isi Bola      = 4.phi.r^2";
    cout << "Jika diketahui panjang jari-jarinya = 10\n";
    k = 2*phi*r;
    l = 4/3*phi*r*r;
    i = 4*phi*r*r;
    cout << "Maka Hasilnya:\n";
    cout << "a.Keliling Bola            = " <<k;
    cout << "\n b.Luas Permukaan Bola   = " <<l;
    cout << "\n c.Isi Bola              = " <<i;
    getch();
}