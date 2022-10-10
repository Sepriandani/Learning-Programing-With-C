//Praktikum EL2208 pemecahan masalah dengan c
//Tugas Praktikum : 3
//Problem         : 3
//Tanggal         : 31 Maret 2019
//Nama (NIM)      : Seprian Dani (13117023)
//Nama File       : TP_problem3.c
//Deskripsi       : ASCII code
#include <stdio.h>
#include<math.h>

int main()
{
    int x;

    printf("Masukkan bilangan : ");
    scanf("%d",&x);

    if(x>=0){
        if(x%2==0){
            printf("Bilangan bulat tersebut adalah bilangan bulat positif dan bilangan genap\n");
        }
        else{
            printf("Bilangan bulat tersebut adalah bilangan bulat positif dan bilangan ganjil\n");
        }
    }
    else if(x<0){
        if(x%2==0){
            printf("Bilangan bulat tersebut adalah bilangan bulat negatif dan bilangan genap\n");
        }
        else{
            printf("Bilangan bulat tersebut adalah bilangan bulat negatif dan bilangan ganjil\n");
        }
    }
    return 0;
}
