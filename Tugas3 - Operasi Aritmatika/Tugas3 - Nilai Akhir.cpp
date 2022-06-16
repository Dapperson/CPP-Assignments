#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int a = 70, b = 80, c = 75, x;
    cout <<"\n Nilai Akhir dari pelajaran bahasa c ditentukan oleh 3 nilai, yaaitu:\n";
    cout <<" Nilai Praktek       bobot 20%\n Nilai UTS           30%\n Nilai UAS         bobot 50%";
    cout <<"Jika Nilai yang diperoleh masing-masing\n";
    cout <<" Nilai Praktek          = 70\n Nilai UTS            = 80\n Nilai UAS            = 75\n";
    x = (a*20/100)+(b*30/100)+(c*50/100);
    cout <<"Maka Nilai Akhir yang diperoleh = " << x;
    getch();
}