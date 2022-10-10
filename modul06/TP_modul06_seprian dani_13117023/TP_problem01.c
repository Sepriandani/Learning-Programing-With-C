//Praktikum EL2206 Pemecahan Masalah dengan C
//Modul         : 6
//Percobaan     : 1
//Tanggal       : 12 april 2019
//Nama (NIM)    : Seprian Dani (13117023)
//Nama File     : TP_problem01
//Deskripsi     : ASCII code
#include <stdio.h>
#include<math.h>
int main ()
{
    int mahasiswa,kuis;
    double tot=0,rata_kelas=0,N_kuis[100][100];
    int i,j;

    printf("Masukkan Jumlah Mahasiswa yang akan di hitung : ");
    scanf("%d",&mahasiswa);
    printf("Masukkan Jumlah Nilai kuis yang akan di hitung : ");
    scanf("%d",&kuis);
    printf("Masukkan nilai %d kuis untuk setiap mahasiswa (1-100)\n",kuis);

    for(i=1;i<=mahasiswa;i++){
        printf("Mahasiswa ke-%d : ",i);
        scanf("%lf%lf%lf",&N_kuis[i][1],&N_kuis[i][2],&N_kuis[i][3]);
    }
    printf("\nRata-rata kuis adalah :\n");
    for(i=1;i<=mahasiswa;i++){
        for(j=1;j<=kuis;j++){
            tot+=(N_kuis[i][j]);
        }
        printf("Mahasiswa ke-%d : %.3f\n",i,(tot/kuis));
        tot=0;
    }
    printf("Rata-rata nilai kelas adalah :\n");
    for(j=1;j<=kuis;j++){
        for(i=1;i<=mahasiswa;i++){
            rata_kelas+=(N_kuis[i][j]);
        }
        printf("Kuis ke-%d : %.3f\n",i,(rata_kelas/mahasiswa));
        rata_kelas=0;
    }

    return 0;
}
