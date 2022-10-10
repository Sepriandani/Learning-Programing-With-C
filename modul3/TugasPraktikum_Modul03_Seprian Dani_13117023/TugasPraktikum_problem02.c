//Praktikum EL2208 Praktikum pemecahan masalah dengan c
//Tugas Praktikum : 3
//Problem         : 2
//Tanggal         : 1 April 2019
//Nama (NIM)      : Seprian Dani (13117023)
//Nama File       : TugasPraktikum_problem02.c
//Deskripsi       : ASCII code
#include<stdio.h>
#include<math.h>

int main()
{
    int b,k;

    printf("Masukkan banyak baris matriks : "); scanf("%d",&b);
    printf("Masukkan banyak kolom matriks : "); scanf("%d",&k);

    int x[b][k];
    int i,j;
    for(i=0;i<b;i++){
        for(j=0;j<k;j++){
            scanf("%d",&x[i][j]);
        }
    }
    printf("\n\n");
    printf("Matriks A :\n");
    for(i=0;i<b;i++){
        printf("|");
        for(j=0;j<k;j++){
            printf("%d",x[i][j]);
        }
        printf("|");
        printf("\n");
    }
    return 0;
}
