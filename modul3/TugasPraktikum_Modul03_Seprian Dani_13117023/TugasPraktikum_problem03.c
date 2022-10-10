//Praktikum EL2208 Praktikum pemecahan masalah dengan c
//Tugas Praktikum : 3
//Problem         : 3
//Tanggal         : 1 April 2019
//Nama (NIM)      : Seprian Dani (13117023)
//Nama File       : TugasPraktikum_problem03.c
//Deskripsi       : ASCII code
#include<stdio.h>
#include<math.h>

int main()
{
    int a11,a12,a13,a21,a22,a23,a31,a32,a33;//matriksA
    int e11,e12,e13,e21,e22,e23,e31,e32,e33;

    printf("Program matriks 3x3 oleh seprian dani\n\n");
    printf("Masukkan 3 angka baris ke-1 yang dipisahkan dengan spasi : ");scanf("%d%d%d",&a11,&a12,&a13);
    printf("Masukkan 3 angka baris ke-2 yang dipisahkan dengan spasi : ");scanf("%d%d%d",&a21,&a22,&a23);
    printf("Masukkan 3 angka baris ke-3 yang dipisahkan dengan spasi : ");scanf("%d%d%d",&a31,&a32,&a33);
    //matriks A
    printf("Matriks A = | %d %d %d |\n",a11,a12,a13);
    printf("            | %d %d %d |\n",a21,a22,a23);
    printf("            | %d %d %d |\n\n",a31,a32,a33);
    //matriks B
    printf("Matriks B = | %d  %d  %d  |\n",a21,a23,a22);
    printf("            | %d  %d  %d  |\n",a11,a13,a12);
    printf("            | %d  %d  %d  |\n\n",(a31*a21),(a32*a22),(a33*a23));
    //matriks C
    printf("Matriks C = Matriks A + Matriks B\n");
    printf("Matriks C = | %d  %d  %d   |\n",(a21+a11),(a23+a12),(a22+a13));
    printf("            | %d  %d  %d   |\n",(a11+a21),(a13+a22),(a12+a23));
    printf("            | %d  %d  %d   |\n\n",((a31*a21)+a31),((a32*a22)+a32),((a33*a23)+a33));
    //matriks D
    printf("Matriks D = Matriks B - Matriks A\n");
    printf("Matriks D = | %d  %d  %d   |\n",(a21-a11),(a23-a12),(a22-a13));
    printf("            | %d  %d  %d   |\n",(a11-a21),(a13-a22),(a12-a23));
    printf("            | %d  %d  %d   |\n\n",((a31*a21)-a31),((a32*a22)-a32),((a33*a23)-a33));
    //Matriks E
    e11=((a21+a11)*(a21-a11))+((a23+a12)*(a11-a21))+((a22+a13)*((a31*a21)-a31));
    e12=((a21+a11)*(a23-a12))+((a23+a12)*(a13-a22))+((a22+a13)*((a32*a22)-a32));
    e13=((a21+a11)*(a22-a13))+((a23+a12)*(a12-a23))+((a22+a13)*((a33*a23)-a33));

    e21=((a11+a21)*(a21-a11))+((a13-a22)*(a11-a21))+((a12-a23)*((a31*a21)-a31));
    e22=((a11+a21)*(a23-a12))+((a13-a22)*(a13-a22))+((a12-a23)*((a32*a22)-a32));
    e23=((a11+a21)*(a22-a13))+((a13-a22)*(a12-a23))+((a12-a23)*((a33*a23)-a33));

    e31=(((a31*a21)+a31)*(a21-a11))+(((a32*a22)+a32)*(a11-a21))+(((a33*a23)+a33)*((a31*a21)-a31));
    e32=(((a31*a21)+a31)*(a23-a12))+(((a32*a22)+a32)*(a13-a22))+(((a33*a23)+a33)*((a32*a22)-a32));
    e33=(((a31*a21)+a31)*(a22-a13))+(((a32*a22)+a32)*(a12-a23))+(((a33*a23)+a33)*((a33*a23)-a33));
    printf("Matriks E = Matriks C x Matriks D\n");
    printf("Matriks E = | %d  %d  %d   |\n",e11,e12,e13);
    printf("            | %d  %d  %d   |\n",e21,e22,e23);
    printf("            | %d  %d  %d   |\n\n",e31,e32,e33);
    //Matriks F


    return 0;
}
