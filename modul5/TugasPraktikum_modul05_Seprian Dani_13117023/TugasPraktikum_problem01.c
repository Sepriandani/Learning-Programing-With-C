//Praktikum EL2208 Praktikum pemecahan masalah dengan c
//Tugas Praktikum : 5
//Problem         : 1
//Tanggal         : 8 April 2019
//Nama (NIM)      : Seprian Dani (13117023)
//Nama File       : TugasPraktikum_problem02.c
//Deskripsi       : ASCII code
#include<stdio.h>


int main()
{
    int array[100][100],b,k,temp;
    printf("Masukkan Baris yang diinginkan : ");
    scanf("%d",&b);
    printf("Masukkan Kolom yang diinginkan : ");
    scanf("%d",&k);
    printf("\n\n");

    for(int i=1;i<=b;i++)
    {
        for(int j=1;j<=k;j++)
        {
            printf("masukkan bilangan baris ke %d kolom ke %d : ",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    printf("\n\nini gambar tabelnya\n\n");
    for(int i=1;i<=b;i++)
    {
        for(int j=1;j<=k;j++)
        {
            printf("  %d  ",array[i][j]);
        }
        printf("\n");
    }
    temp=0;
    for(int i=1;i<=b;i++)
    {
        for(int j=1;j<=k;j++)
        {
            if(temp<=array[i][j]&&array[i][j]%2==1)
            {
                temp=array[i][j];
            }
        }
    }
    printf("\n\nNilai ganjil terbesarnya adalah %d\n\n",temp);
    return 0;
}
