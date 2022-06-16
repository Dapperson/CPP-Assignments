#include <iostream>
#include <conio.h>

using namespace std;

main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        if(i==4)continue;
        for(j=1;j<=i;j++)
        {
            cout << "*";
        }
        cout << endl << endl;
        getch();
    }
}