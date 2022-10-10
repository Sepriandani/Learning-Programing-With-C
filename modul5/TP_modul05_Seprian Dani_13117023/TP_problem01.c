//Praktikum EL2206 Pemecahan Masalah dengan C
//Modul         : 5
//Percobaan     : 1
//Tanggal       : 7 april 2019
//Nama (NIM)    : Seprian Dani (13117023)
//Nama File     : TP_problem01
//Deskripsi     : ASCII code
#include <stdio.h>
int main ()
{
    //Deklarasi Variabel
    int jumlah;
    int indeks [1000];
    int i;
    //Algoritma
    printf("### AKUSISI TABEL STATIK ###");
    printf("\nJumlah elemen yang akan dimasukkan ke tabel : ");
    scanf("%d",&jumlah);
    do{
        if (jumlah == 0) {
            printf("\n### MENAMPILKAN ISI TABEL STATIK ###");
            printf("\nTabel kosong");
            return 0;
        }
        else if (jumlah > 0 && jumlah <= 100) {
            for (i=0; i<jumlah; i++) {
                printf("Masukkan elemen ke-%d : ", i);
                scanf("%d", &indeks[i]);
            }
            printf("\n\n### MENAMPILKAN ISI TABEL STATIK ###");
            printf("\n-----------------------------");
            printf("\n\t TABEL ");
            printf("\n-----------------------------");
            printf("\nINDEKS ISI TABEL ");
            for (i=0; i<jumlah; i++) {
                printf("\n  %d\t   %d", i,indeks[i]);
            }
            printf("\n-----------------------------");
            return 0;
        }
        else if (jumlah < 0 || jumlah > 100) {
            printf("\nMasukkan salah! Jumlah yang dapat ditampung tabel = [0 100]. Mohon ulangi.");
            printf("\nJumlah elemen yang akan dimasukkan ke tabel: ");
            scanf("%d", &jumlah);
        }
    }
    while (1);

    return 0;
}
