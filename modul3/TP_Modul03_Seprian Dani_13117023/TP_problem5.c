//Praktikum EL2208 pemecahan masalah dengan c
//Tugas Praktikum : 3
//Problem         : 5
//Tanggal         : 31 Maret 2019
//Nama (NIM)      : Seprian Dani (13117023)
//Nama File       : TP_problem5.c
//Deskripsi       : ASCII code
#include <stdio.h>
#include<math.h>

int faktorial (int a);
int main()
{
    int permutasi,n,r;
    n=5;
    r=2;

    printf("Berapakah banyak bilangan yang terbentuk dari 2 angka berbeda yang dapat kita susun dari urutan angka 4,8,2,3 dan 5 ?\n\n");
    printf("Diketahui : n = 5 dan r=2\n");
    permutasi=faktorial(n)/(faktorial(n-r));
    printf("Banyak bilangan yang terbentuk adalah : %d bilangan\n",permutasi);

}

int faktorial (int a)
{
    int i;
    int hasil=1;

        for (i=1; i<=a; i++){
            hasil=i*hasil;

        }
	return(hasil);

}
