//Praktikum EL2208 pemecahan masalah dengan c
//Tugas Praktikum : 3
//Problem         : 4
//Tanggal         : 31 Maret 2019
//Nama (NIM)      : Seprian Dani (13117 023)
//Nama File       : TP_problem4.c
//Deskripsi       : ASCII code
#include <stdio.h>
#include<math.h>

int main()
{
    int a,i;
    int faktorial=1;

    printf("Masukkan nilai fakorial : ");
    scanf("%d",&a);

    for(i=1 ; i<=a; i++){
        faktorial*=i;
    }
    printf("Nilai faktorial dari %d! adalah : %d\n",a,faktorial);

    return 0;
}
