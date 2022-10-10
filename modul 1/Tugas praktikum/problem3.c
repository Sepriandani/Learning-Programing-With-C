//Praktikum Pemecahan Masalah dengan C
//Tugas Praktikum : 1
//Problem         : 3
//Tanggal         : 25 Maret 2019
//Nama (NIM)      : Seprian Dani (13117023)
//Nama File       : Probem_3.c
//Deskripsi       : ASCII code
#include<stdio.h>
#include<ctype.h>

int main()
{
    char huruf_besar[2],huruf_kecil[2];

    printf("Masukkan karakter 1 (Huruf besar) : ");
    scanf("%s",&huruf_besar);
    printf("Masukkan karakter 2 (Huruf kecil) : ");
    scanf("%s",&huruf_kecil);

    printf("Karakter 1 setelah diubah : %s\n",strlwr (huruf_kecil));
    printf("Karakter 2 setelah diubah : %s\n",strupr (huruf_besar));

    return 0;
}
