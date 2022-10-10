//Praktikum EL2208 Praktikum pemecahan masalah dengan c
//Tugas Praktikum : 6
//Problem         : 1
//Tanggal         : 13 April 2019
//Nama (NIM)      : Seprian Dani (13117023)
//Nama File       : TugasPraktikum_problem01.c
//Deskripsi       : ASCII code
#include<stdio.h>

int main()
{
    int B_input,pilih;
    char nim [100][100];
    char nama[100][100];
    char asal[100][100];
    char ttl[100][100];
    int i;
    char ulang;

    printf("Berapa banyak input yang anda masukkan? (1 sampai 100) : ");
    scanf("%d",&B_input);
    printf(" No  NIM\t NAMA\t ASAL\t TTL\n");
    for(i=1;i<=B_input;i++){
        printf("| %d |\t\t| \t | \t | \t |\n",i);
    }
    do{
        printf("Data nomor berapa yang akan anda masukkan? : ");
        scanf("%d",&pilih);

        printf("NIM : ");scanf(" %[^\n]",&nim[pilih]);
        printf("NAMA : ");
        scanf(" %[^\n]",&nama[pilih]);
        printf("ASAL : ");
        scanf(" %[^\n]",&asal[pilih]);
        printf("TTL :");
        scanf(" %[^\n]",&ttl[pilih]);

        printf("\n  No   NIM\t  NAMA\t     ASAL\t      TTL\n");
        for(i=1;i<=B_input;i++){
            if(i==pilih){
            printf("| %d |%s    |%s    | %s    | %s    |\n",i,nim[i],nama[i],asal[i],ttl[i]);
            }
            else{
                printf("| %d |\t\t   | \t | \t\t | \t\t |\n",i);
            }
        }
        printf("Apakah anda ingin melanjutkannya? : ");
        scanf("%s",&ulang);
    }
    while((ulang=='y')||(ulang=='Y'));
    return 0;
}
