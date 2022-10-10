//Praktikum Pemecahan Masalah dengan C
//Tugas Praktikum : 1
//Problem         : 1
//Tanggal         : 25 Maret 2019
//Nama (NIM)      : Seprian Dani (13117023)
//Nama File       : Probem_1.c
//Deskripsi       : ASCII code
#include<stdio.h>

int main()
{
    char karakter;

    printf("Masukkan input karakter yang di inginkan : ");
    scanf("%c",&karakter);
    printf("Kamu memasukka karakter %c\n",karakter);
    printf("Nilai ASCII dari karakter %c adalah %d\n",karakter,karakter);

    return 0;
}
