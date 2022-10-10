//praktikum EL2208 Pemecahan Masalah Dengan C
//Tugas Praktikum   :1
//Problem           :1
//Tanggal           :25 maret 2019
//Nama(nim)         :Alhadi Ihsan (13117090)
//Nama File         :Tugas Praktikum problem5.c
//Deskripsi         :ASCII code
#include <stdio.h>
int main (void)
{
    float angka_1,angka_2,result;


    printf ("Masukan angka ke-1\n");
    scanf ("%f",&angka_1);
    printf ("Masukan angka ke-2\n");
    scanf ("%f",&angka_2);
    result = angka_1 + angka_2;
    printf("hasil penjumlahan adalah : %.2f\n" , result);
    return 0;
}

