//praktikum EL2208 Pemecahan Masalah Dengan C
//Tugas Praktikum   :2
//Problem           :1
//Tanggal           :29 maret 2019
//Nama(nim)         :Alhadi Ihsan (13117090)
//Nama File         :Tugas Praktikum problem1.c
//Deskripsi         :ASCII code

#include <stdio.h>
#include<math.h>

int main(void)
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
	printf("Defleksi     : %.2f\n ",d);
	return 0;
}

