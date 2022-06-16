#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

main()
{
    struct zodiak
    {
        char nama[30];
        int tgl_awal;
        int tgl_akhir;
        int bln_awal;
        int bln_akhir;
    };
    struct zodiak bintang1 = {"ARIES",21,3,19,4};
    struct zodiak bintang2 = {"TAURUS",20,4,20,5};
    struct zodiak bintang3 = {"GEMINI",21,5,20,6};
    struct zodiak bintang4 = {"CANCER",21,6,20,7};
    struct zodiak bintang5 = {"LEO",23,7,22,8};
    struct zodiak bintang6 = {"VIRGO",23,7,22,8};
    struct zodiak bintang7 = {"LIBRA",23,9,22,10};
    struct zodiak bintang8 = {"SCORPIO",23,10,21,11};
    struct zodiak bintang9 = {"SAGITARIUS",23,11,20,12};
    struct zodiak bintang10 = {"CAPRICORN",22,12,19,1};
    struct zodiak bintang11 = {"AQUARIUS",20,1,18,2};
    struct zodiak bintang12 = {"PISCES",19,2,20,3};

    char nm[20];
    int tgl_lhr, bln_lhr, thn_lhr;
    cout << "Masukkan Nama Anda         : ";
    cin >> nm;
    cout << "Inputkan Tanggal Lahir Anda: ";
    cin >> tgl_lhr;
    cout << "Inputkan Bulan Lahir Anda  : ";
    cin >> bln_lhr;
    cout << "Inputkan Tahun Lahir       : ";
    cin >> thn_lhr;

    if ((tgl_lhr >= bintang1.tgl_awal)&&(bln_lhr == bintang1.blnawal)||((tgl_lhr <= bintang1.tgl_akhir)&&(bln_lhr == bintang1.bln_akhir)))
    cout << "Zodiak Anda Adalah             : " << bintang1.nama;

    else if ((tgl_lhr >= bintang2.tgl_awal)&&(bln_lhr == bintang2.blnawal)||((tgl_lhr <= bintang2.tgl_akhir)&&(bln_lhr == bintang2.bln_akhir)))
    cout << "Zodiak Anda Adalah             : " << bintang2.nama;

    else if ((tgl_lhr >= bintang3.tgl_awal)&&(bln_lhr == bintang3.blnawal)||((tgl_lhr <= bintang3.tgl_akhir)&&(bln_lhr == bintang3.bln_akhir)))
    cout << "Zodiak Anda Adalah             : " << bintang3.nama;

    else if ((tgl_lhr >= bintang4.tgl_awal)&&(bln_lhr == bintang4.blnawal)||((tgl_lhr <= bintang4.tgl_akhir)&&(bln_lhr == bintang4.bln_akhir)))
    cout << "Zodiak Anda Adalah             : " << bintang4.nama;

    else if ((tgl_lhr >= bintang5.tgl_awal)&&(bln_lhr == bintang5.blnawal)||((tgl_lhr <= bintang5.tgl_akhir)&&(bln_lhr == bintang5.bln_akhir)))
    cout << "Zodiak Anda Adalah             : " << bintang5.nama;

    else if ((tgl_lhr >= bintang6.tgl_awal)&&(bln_lhr == bintang6.blnawal)||((tgl_lhr <= bintang6.tgl_akhir)&&(bln_lhr == bintang6.bln_akhir)))
    cout << "Zodiak Anda Adalah             : " << bintang6.nama;

    else if ((tgl_lhr >= bintang7.tgl_awal)&&(bln_lhr == bintang7.blnawal)||((tgl_lhr <= bintang7.tgl_akhir)&&(bln_lhr == bintang7.bln_akhir)))
    cout << "Zodiak Anda Adalah             : " << bintang7.nama;

    else if ((tgl_lhr >= bintang8.tgl_awal)&&(bln_lhr == bintang8.blnawal)||((tgl_lhr <= bintang8.tgl_akhir)&&(bln_lhr == bintang8.bln_akhir)))
    cout << "Zodiak Anda Adalah             : " << bintang8.nama;

    else if ((tgl_lhr >= bintang9.tgl_awal)&&(bln_lhr == bintang9.blnawal)||((tgl_lhr <= bintang9.tgl_akhir)&&(bln_lhr == bintang9.bln_akhir)))
    cout << "Zodiak Anda Adalah             : " << bintang9.nama;

    else if ((tgl_lhr >= bintang10.tgl_awal)&&(bln_lhr == bintang10.blnawal)||((tgl_lhr <= bintang10.tgl_akhir)&&(bln_lhr == bintang10.bln_akhir)))
    cout << "Zodiak Anda Adalah             : " << bintang10.nama;

    else if ((tgl_lhr >= bintang11.tgl_awal)&&(bln_lhr == bintang11.blnawal)||((tgl_lhr <= bintang11.tgl_akhir)&&(bln_lhr == bintang11.bln_akhir)))
    cout << "Zodiak Anda Adalah             : " << bintang11.nama;

    else if ((tgl_lhr >= bintang12.tgl_awal)&&(bln_lhr == bintang12.blnawal)||((tgl_lhr <= bintang12.tgl_akhir)&&(bln_lhr == bintang12.bln_akhir)))
    cout << "Zodiak Anda Adalah             : " << bintang12.nama;
}