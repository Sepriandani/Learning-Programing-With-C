//Praktikum EL2208 Praktikum pemecahan masalah dengan c
//Tugas Praktikum : 5
//Problem         : 2
//Tanggal         : 8 April 2019
//Nama (NIM)      : Seprian Dani (13117023)
//Nama File       : TugasPraktikum_problem02.c
//Deskripsi       : ASCII code
#include<stdio.h>
#include<math.h>

int main()
{
    char mau;
    int pilih;
    int b,k,a,x[10][10][10],y[10][10][10];
    int hasil[10][10],det;

    printf("Silahkan Pilih Menu :\n");
    printf("1. Penjumlahan Matriks\n");
    printf("2. Pengurangan matriks\n");
    printf("3. Determinan Matriks\n");
    printf("Masukkan Pilihan : ");
    scanf("%d",&pilih);

    switch(pilih)
    {
        case 1:{
            printf("Banyak Baris = ");
            scanf("%d",&b);
            printf("Banyak Kolom = ");
            scanf("%d",&k);

            for(a=1;a<=2;a++){
                printf("\n======================\n");
                printf("Data matriks ke-%d\n",a);
                for(int i=1;i<=b;i++){
                    for(int j=1;j<=k;j++){
                        printf("Data (%d,%d) = ",i,j);
                        scanf("%d",&x[a][i][j]);
                    }
                }
                printf("\n");
                for(int i=1;i<=b;i++){
                    for(int j=1;j<=k;j++){
                        printf("%d",x[a][i][j]);
                        printf("  ");
                    }
                    printf("\n");
                }
            }
            printf("Hasil Penjumlahan :\n");
            for(int i=1;i<=b;i++){
                for(int j=1;j<=k;j++){
                    hasil[i][j]=(x[1][i][j])+(x[2][i][j]);
                    printf("%d",hasil[i][j]);
                    printf("  ");
                }
                printf("\n");
            }
            break;
        }
        case 2:{
            printf("Banyak Baris = ");
            scanf("%d",&b);
            printf("Banyak Kolom = ");
            scanf("%d",&k);

            for(a=1;a<=2;a++){
                printf("\n======================\n");
                printf("Data matriks ke-%d\n",a);
                for(int i=1;i<=b;i++){
                    for(int j=1;j<=k;j++){
                        printf("Data (%d,%d) = ",i,j);
                        scanf("%d",&x[a][i][j]);
                    }
                }
                printf("\n");
                for(int i=1;i<=b;i++){
                    for(int j=1;j<=k;j++){
                        printf("%d",x[a][i][j]);
                        printf("  ");
                    }
                    printf("\n");
                }
            }
            printf("Hasil Pengurangan :\n");
            for(int i=1;i<=b;i++){
                for(int j=1;j<=k;j++){
                    hasil[i][j]=(x[1][i][j])-(x[2][i][j]);
                    printf("%d",hasil[i][j]);
                    printf("  ");
                }
                printf("\n");
            }
            break;
        }
        case 3:{
            printf("Banyak Baris = ");
            scanf("%d",&b);
            printf("Banyak Kolom = ");
            scanf("%d",&k);

                printf("\n======================\n");
                printf("Data matriks ke-%d\n",a);
                for(int i=1;i<=b;i++){
                    for(int j=1;j<=k;j++){
                        printf("Data (%d,%d) = ",i,j);
                        scanf("%d",&x[i][j]);
                    }
                }
                printf("\n");
                for(int i=1;i<=b;i++){
                    for(int j=1;j<=k;j++){
                        printf("%d",x[i][j]);
                        printf("  ");
                    }
                    printf("\n");
                }
        /*
            printf("Hasil determinan %dx%d :\n",b,k);
            if(b==2 && k==2){
                det=(x[1][1]*x[2][2])-(x[1][2]*x[2][1]);
                printf("determinan = %d\n",det);
            }
            else if(b==3 && k==3){
                det=((x[1][1]*x[2][2]*x[3][3])+(x[1][2]*x[2][3]*x[3][1])+(x[1][3]*x[2][1]*x[3][2]))-((x[3][1]*x[2][2]*x[1][3])+(x[3][2]*x[2][3]*x[1][1])+(x[3][3]*x[2][1]*x[1][2]))
                printf("determinan = %d\n",det);
            }*/

        }
    }
    return 0;
}
