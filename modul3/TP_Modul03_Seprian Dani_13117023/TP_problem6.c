//Praktikum EL2208 pemecahan masalah dengan c
//Tugas Praktikum : 3
//Problem         : 6
//Tanggal         : 31  Maret 2019
//Nama (NIM)      : Seprian Dani (13117023)
//Nama File       : TP_problem6.c
//Deskripsi       : ASCII code
#include <stdio.h>
#include<math.h>

int faktorial (int n);
int main()
{
	int n=16,r=11;
	long int kombinasi;

	printf("Dari soal diketahui :\n");
	printf("Banyak pemain (n) = %d\n",n);
	printf("Pemain yang akan diturunkan (r) = %d\n\n",r);

    kombinasi =faktorial(n)/(faktorial(r)*faktorial(n-r));
	printf("Banyaknya kombinasi yang mungkin adalah %d \n", kombinasi);
    //hasil outputnya salah karna memorinya tidak bisa menampung nilai yang terlalu besar
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
