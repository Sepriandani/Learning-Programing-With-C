//Praktukum EL2208 Pemecahan Masalah dengan C
//Modul      : 12
//Percobaan  : 1
//Tanggal    : 29 Marealt 2018
//Nama (NIM) : Seprian Dani (13117023)
//Nama file  : problem1.c
//Deskripsi  : Complex number

#include <stdio.h>
#include "complex.c"
#include "complex.h"


int main () {
	int hasil,real,im;
	double hs;
	int pilih;
    printf("1.Magnitude\n");
    printf("2.Sudut fasa\n");
	printf("3.Penjumlahan\n");
	printf("4.Pengurangan\n");
	printf("5.Perkalian\n");
	printf("6.Pembagian\n");
    printf("7.Exit\n\n");
while(1){
    printf("\n");
	printf("Masukan pilihan anda : ");
	scanf("%d",&pilih);

	switch (pilih){
        case 1:
				printf("Masukkan Bilangan real dan imagjiner\n");
				scanf("%d",&real);
				scanf("%d",&im);

				hs=mag (real,im);

				printf("Magnitude adalah %.2lf",hs);

				break;

        case 2:
				printf("Masukkan Bilangan real dan imagjiner\n");
				scanf("%d",&real);
				scanf("%d",&im);

				hs=fasa (real,im);

				printf("Phasanya adalah %.2lf",hs);

				break;

		case 3: printf("Bilangan Kompleks Pertama\n");
				printf("Masukkan Bilangan real dan imagjiner\n");
				scanf("%f",&bilangan1.real);
				scanf("%f",&bilangan1.imag);

				printf("Bilangan Kompleks Kedua\n");
				printf("Masukkan Bilangan real dan imagjiner\n");
				scanf("%f",&bilangan2.real);
				scanf("%f",&bilangan2.imag);

				hasil=tambah(data.real,data.imag);
				if(hasil<0){
				printf("Pengurangan Kedua bilangan adalah %.0f% .0fi", data.real,data.imag);
				}
				else
				{
				printf("Pengurangan Kedua bilangan adalah %.0f%+.0fi", data.real,data.imag);
					}
				break;
		case 4: printf("Bilangan Kompleks Pertama\n");
				printf("Masukkan Bilangan real dan imagjiner\n");
				scanf("%f",&bilangan1.real);
				scanf("%f",&bilangan1.imag);

				printf("Bilangan Kompleks Kedua\n");
				printf("Masukkan Bilangan real dan imagjiner\n");
				scanf("%f",&bilangan2.real);
				scanf("%f",&bilangan2.imag);

				hasil=kurang(data.real,data.imag);
				if(hasil<0){
				printf("Pengurangan Kedua bilangan adalah %.0f% .0fi", data.real,data.imag);
				}
				else
				{
				printf("Pengurangan Kedua bilangan adalah %.0f%+.0fi", data.real,data.imag);
					}

				break;
		case 5: printf("Bilangan Kompleks Pertama\n");
				printf("Masukkan Bilangan real dan imagjiner\n");
				scanf("%f",&bilangan1.real);
				scanf("%f",&bilangan1.imag);

				printf("Bilangan Kompleks Kedua\n");
				printf("Masukkan Bilangan real dan imagjiner\n");
				scanf("%f",&bilangan2.real);
				scanf("%f",&bilangan2.imag);

				hasil=kali(data.real,data.imag);
				if(hasil<0){
				printf("Perkalian Kedua bilangan adalah %.0f% .0fi", data.real,data.imag);
				}
				else
				{
				printf("Perkalian Kedua bilangan adalah %.0f%+.0fi", data.real,data.imag);
					}
				break;
        case 6: printf("Bilangan Kompleks Pertama\n");
				printf("Masukkan Bilangan real dan imagjiner\n");
				scanf("%f",&bilangan1.real);
				scanf("%f",&bilangan1.imag);

				printf("Bilangan Kompleks Kedua\n");
				printf("Masukkan Bilangan real dan imagjiner\n");
				scanf("%f",&bilangan2.real);
				scanf("%f",&bilangan2.imag);

				hasil=bagi(data.real,data.imag);
				if(hasil<0){
				printf("Pembagian Kedua bilangan adalah %.0f% .0fi", data.real,data.imag);
				}
				else
				{
				printf("Pembagian Kedua bilangan adalah %.0f%+.0fi", data.real,data.imag);
					}
				break;

            case 7:
                exit(0);

	}
}


return 0;

}
