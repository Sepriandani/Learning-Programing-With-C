//praktikum EL2208 Pemecahan Masalah Dengan C
//Tugas Praktikum   :1
//Problem           :1
//Tanggal           :25 maret 2019
//Nama(nim)         :Alhadi Ihsan (13117090)
//Nama File         :Tugas Praktikum problem4.c
//Deskripsi         :ASCII code
#include <stdio.h>
int main (void)
{
    int angka_1;
    int angka_2;
    int result;


    printf ("Masukan angka ke-1\n");
    scanf ("%d",&angka_1);
    printf ("Masukan angka ke-2\n");
    scanf ("%d",&angka_2);
    result = angka_1 + angka_2;
    printf("hasil penjumlahan adalah : %d\n" , result);
    return 0;
}
