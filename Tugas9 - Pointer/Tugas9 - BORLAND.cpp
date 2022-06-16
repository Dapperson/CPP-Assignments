#include <iostream>
#include <ctime>

using namespace std;

main()
{
    char nilaiarr [7]={'B','O','R','L','A','N','D'};
    char*pointerarr=nilaiarr;
    cout << * (nilaiarr+6) << endl;
    cout << * (nilaiarr+5); cout << * (nilaiarr+6) << endl;
    cout << * (nilaiarr+4); cout << * (nilaiarr+5); cout << * (nilaiarr+6) << endl;
    cout << * (nilaiarr+3); cout << * (nilaiarr+4); cout << * (nilaiarr+5); cout << * (nilaiarr+6) << endl;
    cout << * (nilaiarr+2); cout << * (nilaiarr+3); cout << * (nilaiarr+4); cout << * (nilaiarr+5); cout << * (nilaiarr+6) << endl;
    cout << * (nilaiarr+1); cout << * (nilaiarr+2); cout << * (nilaiarr+3); cout << * (nilaiarr+4); cout << * (nilaiarr+5); cout << * (nilaiarr+6) << endl;
    cout << * (nilaiarr); cout << * (nilaiarr+1); cout << * (nilaiarr+2); cout << * (nilaiarr+3); cout << * (nilaiarr+4); cout << * (nilaiarr+5); cout << * (nilaiarr+6) << endl;
}