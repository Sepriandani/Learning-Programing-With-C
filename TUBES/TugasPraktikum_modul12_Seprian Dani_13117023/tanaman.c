#include "sayuran.c"
#include "sayuran.h"

int tanaman(int *x)
{
    int pilih,kembali;
    char sayur;
    awal:
    system("cls");
    printf("\t================================================================\n");
    printf("\t\t\tSelamat Datang di Program Sayuran Hidroponik\n");
    printf("\t=================================================================\n\n");
    printf("Pada program ini anda akan dibantu untuk memberi takaran nutrisi yang sesuai dengan jenis dan umur sayuran\n\n");
    printf("1. Sayuran daun\n2. Sayuran buah\n");
    printf("Pilih jenis tanaman: ");scanf("%d",&pilih);
    system("cls");
    switch(pilih){
        case 1:{
            sayur_daun:
            system("cls");
            printf("\nBeberapa jenis sayuran daun :\n");
            printf("a) Selada\t\tb) Kangkung\t\tc) Bayam\nd) Pakcoy\t\te) Sawi\n");
            printf("Pilih sayuran: ");scanf("%s",&sayur);
            if(sayur=='a'){
                printf("\n");
                selada();
                printf("\nKembali ke :\n1. jenis sayuran\n2. menu awal\n3. Exit\n ");
                printf("masukan pilihan: ");
                scanf("%d",&kembali);
                if(kembali==1){
                    printf("\n\n");
                    goto sayur_daun;
                }
                else if(kembali==2){
                    printf("\n\n");
                    goto awal;
                }
                else if(kembali==3){
                    system("cls");
                    printf("\n\n\t\t====================================================\n");
                    printf("\t\t\tTERIMAKASIH TELAH MENJALAN PROGRAM INI\n");
                    printf("\t\t====================================================\n");
                    break;
                }
            }
            else if(sayur=='b'){
                printf("\n");
                kangkung();
                printf("\nKembali ke :\n1. jenis sayuran\n2. menu awal\n3. Exit\n ");
                printf("masukan pilihan: ");
                scanf("%d",&kembali);
                if(kembali==1){
                    printf("\n\n");
                    goto sayur_daun;
                }
                else if(kembali==2){
                    printf("\n\n");
                    goto awal;
                }
                else if(kembali==3){
                    system("cls");
                    printf("\n\n\t\t====================================================\n");
                    printf("\t\t\tTERIMAKASIH TELAH MENJALAN PROGRAM INI\n");
                    printf("\t\t====================================================\n");
                    break;
                }
            }
            else if(sayur=='c'){
                printf("\n");
                Bayam();
                printf("\nKembali ke :\n1. jenis sayuran\n2. menu awal\n3. Exit\n ");
                printf("masukan pilihan: ");
                scanf("%d",&kembali);
                if(kembali==1){
                    printf("\n\n");
                    goto sayur_daun;
                }
                else if(kembali==2){
                    printf("\n\n");
                    goto awal;
                }
                else if(kembali==3){
                    system("cls");
                    printf("\n\n\t\t====================================================\n");
                    printf("\t\t\tTERIMAKASIH TELAH MENJALAN PROGRAM INI\n");
                    printf("\t\t====================================================\n");
                    break;
                }
            }
            else if(sayur=='d'){
                printf("\n");
                pakchoy();
                printf("\nKembali ke :\n1. jenis sayuran\n2. menu awal\n3. Exit\n ");
                printf("masukan pilihan: ");
                scanf("%d",&kembali);
                if(kembali==1){
                    printf("\n\n");
                    goto sayur_daun;
                }
                else if(kembali==2){
                    printf("\n\n");
                    goto awal;
                }
                else if(kembali==3){
                    system("cls");
                    printf("\n\n\t\t====================================================\n");
                    printf("\t\t\tTERIMAKASIH TELAH MENJALAN PROGRAM INI\n");
                    printf("\t\t====================================================\n");
                    break;
                }
            }
            else if(sayur=='e'){
                printf("\n");
                sawi();
                printf("\nKembali ke :\n1. jenis sayuran\n2. menu awal\n3. Exit\n ");
                printf("masukan pilihan: ");
                scanf("%d",&kembali);

                if(kembali==1){
                    printf("\n\n");
                    goto sayur_daun;
                }
                else if(kembali==2){
                    printf("\n\n");
                    goto awal;
                }
                else if(kembali==3){
                    system("cls");
                    printf("\n\n\t\t====================================================\n");
                    printf("\t\t\tTERIMAKASIH TELAH MENJALAN PROGRAM INI\n");
                    printf("\t\t====================================================\n");
                    break;
                }
            }
            else{
                printf("Pilihan tidak ada di menu\n\n");
            }

        }
        case 2:{
            sayur_buah:
            printf("Beberapa jenis sayuran buah :\n");
            printf("a. Cabai\t\tb. Terong\t\tc.Tomat\n\n");
            printf("Masukkan pilihan: ");scanf("%s",&sayur);
            if(sayur=='a'){
                printf("\n");
                cabai();
                printf("\nKembali ke :\n1. jenis sayuran\n2. menu awal\n3. Exit\n ");
                printf("masukan pilihan: ");
                scanf("%d",&kembali);
                if(kembali==1){
                    printf("\n\n");
                    goto sayur_buah;
                }
                else if(kembali==2){
                    printf("\n\n");
                    goto awal;
                }
                else if(kembali==3){
                    system("cls");
                    printf("\n\n\t\t====================================================\n");
                    printf("\t\t\tTERIMAKASIH TELAH MENJALAN PROGRAM INI\n");
                    printf("\t\t====================================================\n");
                    break;
                }
            }
            else if(sayur=='b'){
                printf("\n");
                terong();
                printf("\nKembali ke :\n1. jenis sayuran\n2. menu awal\n3. Exit\n ");
                printf("masukan pilihan: ");
                scanf("%d",&kembali);
                if(kembali==1){
                    printf("\n\n");
                    goto sayur_buah;
                }
                else if(kembali==2){
                    printf("\n\n");
                    goto awal;
                }
                else if(kembali==3){
                    system("cls");
                    printf("\n\n\t\t====================================================\n");
                    printf("\t\t\tTERIMAKASIH TELAH MENJALAN PROGRAM INI\n");
                    printf("\t\t====================================================\n");
                    break;
                }
            }
            else if(sayur=='c'){
                printf("\n");
                tomat();
                printf("\nKembali ke :\n1. jenis sayuran\n2. menu awal\n3. Exit\n ");
                printf("masukan pilihan: ");
                scanf("%d",&kembali);
                if(kembali==1){
                    printf("\n\n");
                    goto sayur_buah;
                }
                else if(kembali==2){
                    printf("\n\n");
                    goto awal;
                }
                else if(kembali==3){
                    system("cls");
                    printf("\n\n\t\t====================================================\n");
                    printf("\t\t\tTERIMAKASIH TELAH MENJALAN PROGRAM INI\n");
                    printf("\t\t====================================================\n");
                    break;
                }
            }
            else{
                printf("Pilihan tidak ada di menu\n\n");
            }
        }
    }
}
