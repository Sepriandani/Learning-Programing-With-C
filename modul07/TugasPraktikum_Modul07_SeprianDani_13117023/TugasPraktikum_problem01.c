//Praktikum EL2208 Praktikum pemecahan masalah dengan c
//Tugas Praktikum : 7
//Problem         : 1
//Tanggal         : 15 April 2019
//Nama (NIM)      : Seprian Dani (13117023)
//Nama File       : TugasPraktikum_problem01.c
//Deskripsi       : ASCII code
#include<stdio.h>
#include<string.h>

void modul_7(void){
    int pilih,i;
    char ulang,kalimat_1[100],kalimat_2[100];

    do{
        printf("-----Selamat Datang di Pemograman String-----\n");
        printf("1. Membandingkan panjang 2 buah string\n");
        printf("2. Membalikkan & Gabungkan kalimat\n");
        printf("3. Palindrom\n");
        printf("pilihan anda : ");
        scanf("%d",&pilih);

            if(pilih==1){
                printf("Masukkan kalimat pertama : ");
                scanf(" %[^\n]",&kalimat_1);
                printf("Panjang kalimat adalah : %i\n",strlen(kalimat_1));
                printf("Masukkan kalimat kedua : ");
                scanf(" %[^\n]",&kalimat_2);
                printf("Panjang kalimat adalah : %i\n",strlen(kalimat_2));
                if(strlen(kalimat_1)>strlen(kalimat_2)){
                    printf(">>>Kalimat kesatu lebih panjang dari kalimat kedua<<<\n");
                }
                else if(strlen(kalimat_1)==strlen(kalimat_2)){
                    printf(">>>Kalimat kesatu sama panjang dengan kalimat kedua<<<\n");
                }
                else{
                    printf(">>>Kalimat kedua lebih panjang dari kalimat kesatu<<<\n");
                }
            }
            else if(pilih==2){
                printf("Masukkan kalimat pertama : ");
                scanf(" %[^\n]",&kalimat_1);
                printf("Masukkan kalimat kedua : ");
                scanf(" %[^\n]",&kalimat_2);
                strcat(kalimat_1,kalimat_2);
                printf("Hasil kata gabungan : %s\n",kalimat_1);
                 i=strlen(kalimat_1);
                printf("Hasil Pembalikan : ");
                for(i-1;i>0;i--){
                    printf("%c",kalimat_1[i-1]);
                }
                printf("\n");
            }
            else if(pilih==3){
                printf("Masukkan kalimat yang akan diuji : ");
                scanf(" %[^\n]",&kalimat_1);
                strcpy(kalimat_2,kalimat_1);
                strrev(kalimat_2);

                if(strcmp(kalimat_1,kalimat_2)==0){
                    printf("Kalimat yang anda masukkan adalah polindrom\n");
                }
                else{
                    printf("Kalimat yang anda masukkan bukan polindrom\n");
                }
            }
        printf("Mau Coba Lagi (Y/N)? ");
        scanf("%s",&ulang);
        printf("\n\n");
    }
    while((ulang=='y')||(ulang=='Y'));

}
int main()
{
    modul_7();
    return 0;
}
