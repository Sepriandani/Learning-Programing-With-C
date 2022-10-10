//Praktikum EL2206 Pemecahan Masalah dengan C
//Modul         : 8
//Percobaan     : 1
//Tanggal       : 18 april 2019
//Nama (NIM)    : Seprian Dani (13117023)
//Nama File     : TP_problem01
//Deskripsi     : Menjumlahkan bilangan kompleks dengan membuat tipe data menggunakan struct

#include<stdio.h>
#include<complex.h>

void main()
{
    typedef struct cmplx_cartesian{
        double real;
        double imag;
    };

    struct cmplx_cartesian z1;
    struct cmplx_cartesian z2;
    struct cmplx_cartesian hasil;

    printf("Bilangan kompleks Pertama\n");
    printf("Masukkan bilangan real dan imajiner : ");
    scanf("%lf%lf",&z1.real,&z1.imag);
    printf("\nMasukkan bilangan Kedua\n");
    printf("Masukkan bilangan real dan imajiner : ");
    scanf("%lf%lf",&z2.real,&z2.imag);
    hasil.real =z1.real+z2.real;
    hasil.imag =z1.imag+z2.imag;
    printf("Penjumlahan kedua bilangan : %.2f+%.2fi\n",hasil.real,hasil.imag);
    return 0;
}
