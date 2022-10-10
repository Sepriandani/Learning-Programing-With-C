//Praktikum EL2208 pemecahan masalah dengan c
//Tugas Praktikum : 3
//Problem         : 2
//Tanggal         : 31 Maret 2019
//Nama (NIM)      : Seprian Dani (13117023)
//Nama File       : TP_problem2.c
//Deskripsi       : ASCII code
#include <stdio.h>
#include<math.h>
#define phi 3.141

int main()
{
    int pilihan; //swicth
    int alas,tinggi;double L_segitiga; //segitiga
    int sisi,L_persegi;  //persegi
    int r;double L_lingkaran; //lingkaran

    printf("Selamat datang praktikan PMC, silahkan pilih menu berikut :\n");
    printf("1. Menghitung luas lingkaran\n");
    printf("2. Menghitung luas segitiga\n");
    printf("3. Menghitung luas persgi\n\n");

    printf("Masukkan pilihan anda : ");
    scanf("%d",&pilihan);
    printf("\n");
    switch(pilihan)
    {
        //Lingkaran
        case 1:{
            printf("Masukkan jari-jari lingkaran : ");
            scanf("%d",&r);
            L_lingkaran = phi*pow(r, 2);
            printf("Luas lingkaran adalah : %.2f\n",L_lingkaran);
            break;
        }
        //Segitiga
        case 2:{
            printf("Masukkan alas segitiga   : ");
            scanf("%d",&alas);
            printf("Masukkan tinggi segitiga : ");
            scanf("%d",&tinggi);
            L_segitiga=0.5*alas*tinggi;
            printf("Luas segitiga adalah : %.2f\n",L_segitiga);
            break;
        }
        //Persegi
        case 3:{
            printf("Masukkan besar sisi persegi : ");
            scanf("%d",&sisi);
            L_persegi=pow(sisi, 2);
            printf("Luas persegi adalah : %d\n",L_persegi);
            break;
        }
    }

    return 0;
}
