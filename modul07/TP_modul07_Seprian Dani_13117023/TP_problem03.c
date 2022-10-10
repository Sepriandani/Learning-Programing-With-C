//Praktikum EL2206 Pemecahan Masalah dengan C
//Modul         : 7
//Percobaan     : 3
//Tanggal       : 14 april 2019
//Nama (NIM)    : Seprian Dani (13117023)
//Nama File     : TP_problem03
//Deskripsi     : ASCII code
#include <stdio.h>
#include<string.h>
int main()
{
    int i;
    char kalimat[100];

    printf("Masukkan kalimat yang ingin dibalik : ");
    scanf("%[^\n]",&kalimat);
    i=strlen(kalimat);
    printf("Hasil pembalik : ");
    for(i-1;i>0;i--){
        printf("%c",kalimat[i-1]);
    }
    printf("\n");

    return 0;
}
