//Praktikum Pemecahan Masalah dengan C
//Tugas Praktikum : 1
//Problem         : 2
//Tanggal         : 25 Maret 2019
//Nama (NIM)      : Seprian Dani (13117023)
//Nama File       : Probem_2.c
//Deskripsi       : ASCII code
#include<stdio.h>

int main()
{
    double nilai;

    printf("Masukkan nilai yang diinginkan :");
    scanf("%lf",&nilai);
    printf("Nilai desimal yang dicetak (3 angka dibelakang koma) : %.3f\n",nilai);
    printf("Nilai desimal yang dicetak (bentuk exponential) : %e",nilai);

    return 0;
}

