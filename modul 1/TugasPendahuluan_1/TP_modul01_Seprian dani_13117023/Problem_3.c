//Praktikum Pemecahan Masalah dengan C
//Tugas Praktikum : 1
//Problem         : 3
//Tanggal         : 24 Maret 2019
//Nama (NIM)      : Seprian Dani (13117023)
//Nama File       : Probem_3.c
//Deskripsi       : ASCII code
#include<stdio.h>

int main()
{
    //deklarasi variabel
    char nama_depan[32],nama_belakang[32];

    //algoritma
    printf("Masukkan nama lengkap anda : ");
    scanf("%s%s",&nama_depan,&nama_belakang);
    printf("Hello World, %s %s!\n",nama_depan,nama_belakang);

    return 0;
}
