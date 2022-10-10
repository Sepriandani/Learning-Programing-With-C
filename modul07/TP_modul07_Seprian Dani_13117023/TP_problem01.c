//Praktikum EL2206 Pemecahan Masalah dengan C
//Modul         : 7
//Percobaan     : 1
//Tanggal       : 13 april 2019
//Nama (NIM)    : Seprian Dani (13117023)
//Nama File     : TP_problem01
//Deskripsi     : ASCII code
#include <stdio.h>
#include<string.h>
int main()
{
    char kalimat[100];

    printf("Masukkan sebuah kalimat : ");
    scanf("%[^\n]",&kalimat);

    printf("\nKalimat masukan : %s\n",kalimat);
    printf("Pamjamg kalimat adalah : %i\n",strlen(kalimat));

    return 0;
}
