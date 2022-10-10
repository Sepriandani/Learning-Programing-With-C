//Praktikum Pemecahan Masalah dengan C
//Tugas Praktikum : 1
//Problem         : 4
//Tanggal         : 25 Maret 2019
//Nama (NIM)      : Seprian Dani (13117023)
//Nama File       : Probem_4.c
//Deskripsi       : ASCII code
#include<stdio.h>

int main()
{
    char nama_depan[32],nama_belakang[32],tempat_lahir[32],bulan[32],prodi[32],prodi2[32];
    int nim,tanggal,tahun,angkatan;

    printf("Nama Anda     : ");scanf("%s%s",&nama_depan,&nama_belakang);
    printf("NIM Anda      : ");scanf("%d",&nim);
    printf("Tempat lahir  : ");scanf("%s",&tempat_lahir);
    printf("Tanggal lahir : ");scanf("%d%s%d",&tanggal,&bulan,&tahun);
    printf("Program Studi : ");scanf("%s%s",&prodi,&prodi2);
    printf("Angkatan      : ");scanf("%d",&angkatan);

    printf("Biodata\n");
    printf("===================================\n");
    printf("Nama                     : %s %s\n",nama_depan,nama_belakang);
    printf("NIM                      : %d\n",nim);
    printf("Program studi            : %s %s\n",prodi,prodi2);
    printf("Tempat dan tanggal tahir : %s, %d %s %d\n",tempat_lahir,tanggal,bulan,tahun);

    return 0;
}
