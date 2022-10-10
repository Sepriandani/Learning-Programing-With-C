//Praktikum EL2208 Praktikum pemecahan masalah dengan c
//Tugas Praktikum : 2
//Problem         : 1
//Tanggal         : 30 Maret 2019
//Nama (NIM)      : Seprian Dani (13117023)
//Nama File       : TP_Modul02_Seprian Dani_13117023.c
//Deskripsi       : ASCII code
#include <stdio.h>
#include<math.h>

int main()
{
    int a,b;

    printf("Masukkan bilangan : \n");
    scanf("%d",&a);
    printf("Masukkan bilagan :\n");
    scanf("%d",&b);

    if(a%2==0){
        printf("%d bilangan genap\n",a);
    }
    else{
        printf("%d bilangan ganjil\n",a);
    }

    if(b%2==0){
        printf("%d bilangan genap\n",b);
    }
    else{
        printf("%d bilangan ganjil\n",b);
    }

    return 0;
}
