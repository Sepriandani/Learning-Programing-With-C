//Praktikum Pemecahan Masalah dengan C
//Tugas Praktikum : 1
//Problem         : 4
//Tanggal         : 24 Maret 2019
//Nama (NIM)      : Seprian Dani (13117023)
//Nama File       : Probem_4.c
//Deskripsi       : ASCII code
#include <stdio.h>
int main (void)
{
    // Deklarasi Variabel
    int Angka_1;
    int Angka_2;
    int Result;
    // Algoritma
    printf("Masukkan bilangan ke-1: ");
    scanf("%d",&Angka_1);
    printf("Masukkan bilangan ke-2: ");
    scanf("%d",&Angka_2);
    Result = Angka_1 + Angka_2;
    printf("Hasil penjumlahan: %d\n",Result);
    return 0;
}

