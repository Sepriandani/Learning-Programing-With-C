//Praktikum EL2208 Praktikum pemecahan masalah dengan c
//Tugas Praktikum : 4
//Problem         : 1
//Tanggal         : 4 April 2019
//Nama (NIM)      : Seprian Dani (13117023)
//Nama File       : problem01.c
//Deskripsi       : ASCII code
#include<stdio.h>

int fibonacci(int x);
int main()
{
    int n;

    printf("Masukan nilai n yang diinginkan : ");
    scanf("%d",&n);
    printf("Barisan Bilangan Fibonacci adalah =\n");

    if(n<1){
        printf("Nilai n harus lebih besar sama dengan 1!!!\n");
    }
    else{
        fibonacci(n);
    }
    printf("\n\n");

    return 0;
}

int fibonacci(int x)
{
    int a,hasil,b=0,c=1;

    for(a=0;a<x;a++){
        if(a<=1){
            hasil=a;
            printf("%d",hasil);
            printf(" ");
        }
        else{
            hasil=b+c;
            b=c;
            c=hasil;
            printf("%d",hasil);
            printf(" ");
        }
    }
}
