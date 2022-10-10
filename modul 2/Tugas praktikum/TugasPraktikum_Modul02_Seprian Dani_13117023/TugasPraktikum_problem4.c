//Praktikum EL2208 Praktikum pemecahan masalah dengan c
//Tugas Praktikum : 2
//Problem         : 4
//Tanggal         : 30 Maret 2019
//Nama (NIM)      : Seprian Dani (13117023)
//Nama File       : TP_Modul02_Seprian Dani_13117023.c
//Deskripsi       : ASCII code
#include <stdio.h>
#include<math.h>

int main()
{
    int satuan,puluhan,ratusan,ribuan,lainnya;

    scanf("%d",&satuan);
    scanf("%d",&puluhan);
    scanf("%d",&ratusan);
    scanf("%d",&ribuan);
    scanf("%d",&lainnya);

    if(satuan>=0 && satuan<=9){
        printf("Bilangan satuan\n");
    }
    else if(satuan>9){
        printf("Bukan bilangan satuan\n");
    }

    if(puluhan>=10 && satuan<=99){
        printf("Bilangan puluhan\n");
    }
    else if(puluhan>99){
        printf("Bukan bilangan puluhan\n");
    }
    if(ratusan>=100 && ratusan<=999){
        printf("Bilangan ratusan\n");
    }
    else if(ratusan>999){
        printf("Bukan bilangan ratusan\n");
    }
    if(ribuan>=1000 && ribuan<=9999){
        printf("Bilangan Ribuan\n");
    }
    else if(ribuan>9999){
        printf("Bukan bilangan ribuan\n");
    }
    if(lainnya>=10000){
        printf("Bukan bilangan satuan, puluhan, ratusan atau ribuan\n");
    }
}
