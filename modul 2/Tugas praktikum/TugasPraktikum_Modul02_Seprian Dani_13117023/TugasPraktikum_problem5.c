//Praktikum EL2208 Praktikum pemecahan masalah dengan c
//Tugas Praktikum : 2
//Problem         : 5
//Tanggal         : 30 Maret 2019
//Nama (NIM)      : Seprian Dani (13117023)
//Nama File       : TP_Modul02_Seprian Dani_13117023.c
//Deskripsi       : ASCII code
#include <stdio.h>
#include<math.h>
#define phi 3.141

int main()
{
    int a,b,c;
    double a1,b1,c1;

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    a1=a*(phi/180);
    b1=b*(phi/180);
    c1=c*(phi/180);

    printf("cos %d adalah %.2f\n",a,cos(a1));
    printf("cos %d adalah %.2f\n",b,cos(b1));
    printf("cos %d adalah %.2f\n",c,cos(c1));

    return 0;
}
