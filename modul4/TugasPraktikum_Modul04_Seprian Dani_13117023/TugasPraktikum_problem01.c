//Praktikum EL2208 Praktikum pemecahan masalah dengan c
//Tugas Praktikum : 4
//Problem         : 1
//Tanggal         : 6 April 2019
//Nama (NIM)      : Seprian Dani (13117023)
//Nama File       : TugasPraktikum_problem01.c
//Deskripsi       : ASCII code

#include <stdio.h>

int amstrong(int x);
int main()
{
    int a;

    printf("masukan bilangan = ");
    scanf("%d", &a);
    amstrong(a);

    return 0;
}

int amstrong(int x)
{
    int b, c, d = 0;

    b = x;

    while (b != 0)
    {
        c = b%10;
        d += c*c*c;
        b /= 10;
    }

    if(d == x)
        printf("%d adalah bilangan Angstrong",x);
    else
        printf("%d adalah bukan bilangan Angstrong",x);

}
