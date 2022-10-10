//Praktikum EL2208 pemecahan masalah dengan c
//Tugas Praktikum : 3
//Problem         : 1
//Tanggal         : 31 Maret 2019
//Nama (NIM)      : Seprian Dani (13117023)
//Nama File       : TP_problem1.c
//Deskripsi       : ASCII code
#include <stdio.h>
#include<math.h>

int main()
{
    int nilai_1,nilai_2;

    printf("Masukkan nilai pertama : ");
    scanf("%d",&nilai_1);
    printf("Masukkan nilai kedua   : ");
    scanf("%d",&nilai_2);

    if(nilai_1>nilai_2){
        printf("Nilai pertama lebih besar dari nilai kedua\n");
    }
    else if(nilai_1==nilai_2){
        printf("Nilai pertama sama besar dengan nilai kedua\n");
    }
    else{
        printf("Nilai pertama lebih kecil dari nilai kedua\n");
    }

    return 0;
}
