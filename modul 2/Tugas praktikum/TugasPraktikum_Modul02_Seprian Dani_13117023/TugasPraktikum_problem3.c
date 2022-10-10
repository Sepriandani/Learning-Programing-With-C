//Praktikum EL2208 Praktikum pemecahan masalah dengan c
//Tugas Praktikum : 2
//Problem         : 3
//Tanggal         : 30 Maret 2019
//Nama (NIM)      : Seprian Dani (13117023)
//Nama File       : TP_Modul02_Seprian Dani_13117023.c
//Deskripsi       : ASCII code
#include <stdio.h>
#include<math.h>

int main()
{
    int r,t;
    double volume;

    printf("Masukkan jari-jari tabung :\n");
    scanf("%d",&r);
    printf("Masukkan tinggi tabung :\n");
    scanf("%d",&t);

    volume=3.14*pow(r, 2)*t;

    printf("Volume tabung : %.2f\n",volume);

    return 0;
}
