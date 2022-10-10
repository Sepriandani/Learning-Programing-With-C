//Praktikum EL2206 Pemecahan Masalah dengan C
//Modul         : 8
//Percobaan     : 2
//Tanggal       : 18 april 2019
//Nama (NIM)    : Seprian Dani (13117023)
//Nama File     : TP_problem02
//Deskripsi     : Membuat list mahasiswa menggunakan struct
#include <stdio.h>

int main()
{
    struct tanggal{
        int hari;
        int bulan;
        int tahun;
    };
    struct {
        char nama[20];
        int absen;
        double nilai;
        struct tanggal lahir;
    }mahasiswa[100];
    int i,a;
    printf("Masukkan jumlah mahasiswa : ");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        printf("Masukkan biodata ke-%d Mahasiswa :\n",i);
        printf("Nama : ");scanf(" %[^\n]",&mahasiswa[i].nama);
        printf("Nomor absen : ");scanf("%d",&mahasiswa[i].absen);
        printf("jumlah nilai : ");scanf("%lf",&mahasiswa[i].nilai);
        printf("Tanggal lahir : ");scanf("%d%d%d",&mahasiswa[i].lahir.hari,&mahasiswa[i].lahir.bulan,&mahasiswa[i].lahir.tahun);
        printf("\n\n");
    }
    printf("DETAIL MAHASISWA :\n");
    for(i=1;i<=a;i++){
        printf("Nomor Absen : %d\n",mahasiswa[i].absen);
        printf("Nama : %s\n",mahasiswa[i].nama);
        printf("Jumlah Nilai : %.2f\n",mahasiswa[i].nilai);
        printf("Tanggal Lahir : %2d/%2d/%d \n\n",mahasiswa[i].lahir.hari,mahasiswa[i].lahir.bulan,mahasiswa[i].lahir.tahun);
    }

    return 0;
}
