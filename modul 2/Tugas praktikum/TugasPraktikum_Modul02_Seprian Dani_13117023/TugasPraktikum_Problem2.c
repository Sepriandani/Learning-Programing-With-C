//Praktikum EL2208 Praktikum pemecahan masalah dengan c
//Tugas Praktikum : 2
//Problem         : 2
//Tanggal         : 30 Maret 2019
//Nama (NIM)      : Seprian Dani (13117023)
//Nama File       : TP_Modul02_Seprian Dani_13117023.c
//Deskripsi       : ASCII code
#include <stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    double luas,s;

    printf("Masukkan sisi pertama segitiga :\n");
    scanf("%d",&a);
    printf("Masukkan sisi kedua segitiga :\n");
    scanf("%d",&b);
    printf("Masukkan sisi ketiga segitiga :\n");
    scanf("%d",&c);

    s=(a+b+c)/2;
    luas =sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Luas segitiga : %.2f \n",luas);

    return 0;
}
