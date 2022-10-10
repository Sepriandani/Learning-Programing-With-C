//Praktikum EL2208 Praktikum pemecahan masalah dengan c
//Tugas Praktikum : 4
//Problem         : 3
//Tanggal         : 6 April 2019
//Nama (NIM)      : Seprian Dani (13117023)
//Nama File       : TugasPraktikum_problem03.c
//Deskripsi       : ASCII code
#include<stdio.h>

int main(){
    int a;
    int *p;
    int **q;

    printf("Masukkan nilai a : ");
    scanf("%d", &a);

    p=&a;
    q=&p;

    printf("Nilai a dan alamat a = %d dan %p \n" , a, &a);
    printf("Nilai *p dan alamat p = %d dan %p \n", *p ,&p);
    printf("Alamat **q, alamat *q, dan nilai q = %p, %p, %d",&a,&p,q );

    return 0;
}
