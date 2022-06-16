#include <iostream>
#include <conio.h>

using namespace std;

int i,x;
int matriks_A[2][2], matriks_B[2][2], matriks_C[2][2];
char ulang;

int main()
{
    cout << "\nPenjumlahan 2 Matriks Ordo 2x2 \n\n";
    do
    {
        cout << "\n========== PENGISIAN MATRIKS A ==========";
        cout << "\nData matriks A\n";

        for(i=0;i<2;i++)
        {
            for(x=0;x<2;x++)
            {
                cout << "Masukkan baris ke " << i+1 << " kolom ke " << x+1 << " : ";
                cin >> matriks_A[i][x];
            }
        }
        cout << "\n========== PENGISIAN MATRIKS B ==========";
        cout << "\nData matriks B\n";

        for(i=0;i<2;i++)
        {
            for(x=0;x<2;x++)
            {
                cout << "Masukkan baris ke " << i+1 << " kolom ke " << x+1 << " : ";
                cin >> matriks_B[i][x];
            }
        }
        cout << "\n========== HASIL PENJUMLAHAN A + B ==========";
        cout << "\nMatriks A + Matriks B : " << endl << endl;
        for(i=0;i<2;i++)
        {
            for(x=0;x<2;x++)
            {
                matriks_C[i][x] = matriks_A[i][x] + matriks_B[i][x];
                cout << "\t" << matriks_C[i][x];
            }
            cout << endl;
        }
        cout << "\nHitung lagi? [Y/T] : "; cin >> ulang;
    }
    while (ulang='Y');
    cout << "\n\nTerima Kasih\n\n";
    getch();
}
