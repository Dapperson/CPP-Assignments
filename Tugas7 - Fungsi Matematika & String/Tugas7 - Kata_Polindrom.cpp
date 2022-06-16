#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
    char a[100],b[100];
    printf("Program Menentukan Kata Polindrom\n\n");
    printf("Ketikkan kata sembarang : "); gets(a);
    strcpy(b,a);
    strrev(b);
    if(strcmp(a,b)==0)
        printf("Kata '%s' merupakan kata polindrom", &a);
    else
        printf("\nKata '%s' bukan merupakan kata polindrom", &a);

    getch();
}