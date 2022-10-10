//Praktikum Pemecahan Masalah dengan C
//Tugas Praktikum : 2
//Problem         : 1
//Tanggal         : 29 Maret 2019
//Nama (NIM)      : Seprian Dani (13117023)
//Nama File       : TP_Modul02_Seprian Dani_13117023.c
//Deskripsi       : ASCII code
#include <stdio.h>
#include<math.h>

int main()
{
	// Deklarasi Variabel
	int L,h,b,p;
	double d,i,E;
	E=2.07*pow(10, 11);

	// Algoritma
	// Input Pengguna
	printf("Masukkan Panjang Batang (L):\n");
	scanf("%d",&L);
	printf("Masukkan Tinggi Penampang Batang (h):\n");
	scanf("%d",&h);
	printf("Masukkan Alas Penampang Batang (b):\n");
	scanf("%d",&b);
	printf("Masukkan Besar Gaya yang Bekerja (P):\n");
	scanf("%d",&p);

	// Perhitungan
	i=(b*pow(h, 3))/12;
	d=(p*pow(L, 3))/(3*E*i);

	// Output Pengguna
	printf("Momen Inersia: %.2f\n",i);
	printf("Defleksi: %.2f\n ",d);
	return 0;
}
