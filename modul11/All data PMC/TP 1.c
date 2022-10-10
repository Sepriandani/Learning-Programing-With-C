//Praktikum EL2208 Pemecah Masalah dengan C
//Modul		: 1
//Percobaan	: 1
//Tanggal	: 21 Februari 2018
//Nama(NIM)	: Indah Dwi Rizki Amas (13116010)
//Nama file	: Problem2
//Deskripsi	: program menampilkan ASCII

#include <stdio.h>
int main (void)
{
	//Deklarasi Variabel
	char karakter;
	
	//Algoritma
	printf ("Masukkan input karakter yang diinginkan : ");
	scanf	("%c",&karakter);
	printf ("Nilai ASCII dari karakter adalah %d", karakter);
	return 0;
}
