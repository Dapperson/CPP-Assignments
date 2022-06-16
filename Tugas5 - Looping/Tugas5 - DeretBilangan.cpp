#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int i;
    cout << "\n Deret Bilangan Genap dan Ganjil antara 0 samapi dengan 50";
    cout << "\n Bilangan Genap : ";
    for (i=0;i<=50;i++)
    {
        if (i%2==0)
        cout << i << " ";
    }
    cout << "\n Bilangan Ganjil : ";
    for(i=0;i<=50;i++)
    {
        if(i%2!=0)
        cout << i << " ";
    }
    
    getch();
}