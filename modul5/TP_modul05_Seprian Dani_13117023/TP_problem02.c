//Praktikum EL2206 Pemecahan Masalah dengan C
//Modul     : 5
//Percobaan : 2
//Tanggal   : 7 april 2019
//Nama (NIM): seprian dani (13117023)
//Nama File : TP_problem02
//Deskripsi : ASCII code
#include <stdio.h>
#include<malloc.h>
int main ()
{
    //Deklarasi Variabel
    int jumlah;
    int *indeks;
    int i;
    indeks=(int*)malloc(16 *sizeof(int));
    //Algoritma
    printf("### AKUSISI TABEL DINAMIK ###");
    printf("\nJumlah elemen tabel = ");
    scanf("%d", &jumlah);
    do{
        if (jumlah == 0) {
        printf("\n### MENAMPILKAN ISI TABEL DINAMIK ###");
        printf("\nTabel kosong");
        return 0;
        }
        else if (jumlah > 0 && jumlah <= 100) {
            for (i=0; i<jumlah; i++) {
                printf("\nMasukkan elemen ke-%d : ", i);
                scanf("%d", &indeks[i]);
            }
            printf("\n\n### MENAMPILKAN ISI TABEL DINAMIK ###");
            printf("\n-----------------------------");
            printf("\n TABEL ");
            printf("\n-----------------------------");
            printf("\nINDEKS ISI TABEL ");
            for (i=0; i<jumlah; i++) {
                printf("\n   %d\t     %d", i,indeks[i]);
            }
            printf("\n-----------------------------");
            return 0;
        }
        else if (jumlah < 0 || jumlah > 100) {
            printf("\nMasukkan salah! Jumlah Elemen harus >= 0");
            printf("\nJumlah elemen tabel = ");
            scanf("%d", &jumlah);
        }
    }
    while (1);
    return 0;
}
