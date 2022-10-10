//praktikum EL2208 Pemecahan Masalah Dengan C
//Tugas Praktikum   :1
//Problem           :1
//Tanggal           :25 maret 2019
//Nama(nim)         :Alhadi Ihsan (13117090)
//Nama File         :Tugas Praktikum problem3.c
//Deskripsi         :ASCII code
#include <stdio.h>
int main (void)
{
    char nama_depan[32],nama_belakang[32];
    printf ("Masukan Nama Lengkap Anda\n");
    scanf ("%s%s",&nama_depan,&nama_belakang);
    printf ("Hello World  %s %s!\n",nama_depan,nama_belakang);
    return 0;
}
