//Praktikum EL2206 Pemecahan Masalah dengan C
//Modul         : 8
//Percobaan     : 1
//Tanggal       : 18 april 2019
//Nama (NIM)    : Seprian Dani (13117023)
//Nama File     : TugasPraktikum_problem01
//Deskripsi     : Mencari Luas suatu bidang sesuai bnyak titik yang ditentukan oleh user

#include<stdio.h>
#include<math.h>
int main()
{
    struct {
        float x;
        float y;
    }titik[100];

    int j_ttk,i;
    double hasil_x,hasil_y,luas;

    printf("-----Program Menghitung Luas Bidang-----\n\n");
    do{
        printf("Masukkan jumlah titik yang akan dimasukkan : ");scanf("%d",&j_ttk);
        if(j_ttk<=2){
            printf("Jumlah titik yang anda masukkan tidak dapat membuat bidang\n");
        }
    }
    while(j_ttk<=2);

    for(i=0;i<j_ttk;i++){
        printf("Masukkan koordinat (X Y) titik ke-%d : ",i);
        scanf("%f%f",&titik[i].x,&titik[i].y);
    }
    hasil_x=0;
    hasil_y=0;
    for(i=0;i<j_ttk;i++){
        if(i+1==j_ttk){
            hasil_x=hasil_x +(titik[i].x*titik[0].y);
            hasil_y=hasil_y +(titik[0].x*titik[i].y);
        }
        else{
            hasil_x=hasil_x+(titik[i].x*titik[i+1].y);
            hasil_y=hasil_y +(titik[i+1].x*titik[i].y);
        }
    }
    if((hasil_x-hasil_y)<0){
        luas=(hasil_x-hasil_y)/-2;
        printf("\nLuasnya adalah : %.2f\n",luas);
    }
    else{
        luas=(hasil_x-hasil_y)/2;
        printf("\nLuasnya adalah : %.2f\n",luas);
    }

  /*  for(i=0;<j_ttk;i++){
        hasil_x[i]=titik[i].x*titik[i+1].y;
    }
    for(i=0;i,j_ttk;i++){
        hasil=hasil_x[i]+hasil;
    }*/

    return 0;
}
