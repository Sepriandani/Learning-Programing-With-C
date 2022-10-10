//Praktikum EL2206 Pemecahan Masalah dengan C
//Modul         : 7
//Percobaan     : 4
//Tanggal       : 14 april 2019
//Nama (NIM)    : Seprian Dani (13117023)
//Nama File     : TP_problem04
//Deskripsi     : ASCII code
#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i;
    char kalimat[100];

    printf("Masukkan kalimat dalam huruf kapital : ");
    scanf("%[^\n]",kalimat);
    printf("Hasil : ");
    for(i=0;i<strlen(kalimat);i++){
        printf("%c",tolower(kalimat[i]));
    }
    printf("\n");

    return 0;
}
