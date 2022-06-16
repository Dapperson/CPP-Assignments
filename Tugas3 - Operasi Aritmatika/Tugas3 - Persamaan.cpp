#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int b = 15, x = 5, c = 10, Y;
    cout << "\n Diketahui:\n Nilai b = 15\n Nilai x = 5\n Nilai c = 10\n";
    cout << "Ditanyakan Y\n";
    cout << "Rumus Y = bx^2 + 0,5x - c\n";
    Y = (b*x*x) + (0,5*x-c);
    cout << "Y = " << Y;
    getch();
}