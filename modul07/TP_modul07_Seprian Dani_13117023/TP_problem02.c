//Praktikum EL2206 Pemecahan Masalah dengan C
//Modul         : 7
//Percobaan     : 2
//Tanggal       : 13 april 2019
//Nama (NIM)    : Seprian Dani (13117023)
//Nama File     : TP_problem02
//Deskripsi     : ASCII code
#include <stdio.h>
#include<string.h>
int main()
{
    char kata_1[100];
    char kata_2[100];

    printf("Masukkan kata pertama : ");
    scanf("%s",&kata_1);
    printf("Masukkan kata kedua : ");
    scanf("%s",&kata_2);

    strcat(kata_1,kata_2);
    printf("Hasil kata gabungan = %s\n",kata_1);

    return 0;
}
