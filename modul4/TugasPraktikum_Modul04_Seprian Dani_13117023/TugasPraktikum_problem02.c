//Praktikum EL2208 Praktikum pemecahan masalah dengan c
//Tugas Praktikum : 4
//Problem         : 2
//Tanggal         : 6 April 2019
//Nama (NIM)      : Seprian Dani (13117023)
//Nama File       : TugasPraktikum_problem02.c
//Deskripsi       : ASCII code

#include <stdio.h>

void perkalian(int, int, int [][10], int, int, int [][10], int [][10]);
void hasil(int, int, int[][10]);

int main(){
    int a[10][10], b[10][10], c[10][10] = {0};
    int a1, b1, a2, b2, i, j, k;

    printf("Masukkan baris dan kolom untuk matriks A: ");
    scanf("%d%d", &a1, &b1);
    printf("Masukkan baris dan kolom untuk matriks B: ");
    scanf("%d%d", &a2, &b2);
    if (b1 != a2){
        printf("Perhitungan tidak bisa dilakukan/tidak mungkin.\n");
    }
    else{
        printf("Masukkan angka Matriks A:\n");
        for (i = 0; i < a1; i++)
        for (j = 0; j < b1; j++){
            scanf("%d", &a[i][j]);
        }printf("\nMasukkan angka Matriks B:\n");
        for (i = 0; i < a2; i++)
        for (j = 0; j < b2; j++){
            scanf("%d", &b[i][j]);
        }perkalian(a1, b1, a, a2, b2, b, c);

    }

    printf("\nHasil dari perkalian 2 matriks adalah:\n");
    hasil(a1, b2, c);

}


void perkalian(int a1, int b1, int a[10][10], int a2, int b2, int b[10][10], int c[10][10]){
    static int i = 0, j = 0, k = 0;
    if (i >= a1){
        return;
    }else if (i < a1){

        if (j < b2){

            if (k < b1){

                c[i][j] += a[i][k] * b[k][j];

                k++;

                perkalian(a1, b1, a, a2, b2, b, c);

            }

            k = 0;

            j++;

            perkalian(a1, b1, a, a2, b2, b, c);

        }

        j = 0;
        i++;
        perkalian(a1, b1, a, a2, b2, b, c);
    }
}

void hasil(int a1, int b2, int c[10][10]){
    int i, j;

    for (i = 0; i < a1; i++){
        for (j = 0; j < b2; j++){
            printf("%d  ", c[i][j]);
        }printf("\n");
    }
}
