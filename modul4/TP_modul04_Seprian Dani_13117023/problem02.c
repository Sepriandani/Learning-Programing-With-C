//Praktikum EL2208 Praktikum pemecahan masalah dengan c
//Tugas Praktikum : 4
//Problem         : 2
//Tanggal         : 4 April 2019
//Nama (NIM)      : Seprian Dani (13117023)
//Nama File       : problem02.c
//Deskripsi       : ASCII code
#include<stdio.h>

int tukar(int x);
int main()
{
    int bilangan_a,bilangan_b,temp,i;

    for(i=0;i<2;i++){
    printf("Masukkan bilangan A :\n");
    scanf("%d",&bilangan_a);
    printf("Masukkan bilangan B :\n");
    scanf("%d",&bilangan_b);

    temp=tukar(bilangan_a);
    bilangan_a=tukar(bilangan_b);
    bilangan_b=temp;

    printf("%d %d\n",bilangan_a,bilangan_b);
    }
    return 0;
}

int tukar(int x)
{
    int *alamat;
    int hasil;

    alamat= &x;
    hasil= *alamat;

    return (hasil);
}
