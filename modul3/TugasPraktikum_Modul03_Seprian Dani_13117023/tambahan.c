#include<stdio.h>
#include<math.h>

int main()
{
     int b,k;

    printf("Masukkan banyak baris matriks : "); scanf("%d",&b);
    printf("Masukkan banyak kolom matriks : "); scanf("%d",&k);

    int x[b][k];
    int i,j;
    for(i=0;i<b;i++){
        for(j=0;j<k;j++){
            scanf("%d",&x[i][j]);
        }
    }
    printf("\n\n");
    printf("Matriks A :\n");
    for(i=0;i<b;i++){
        printf("|");
        for(j=0;j<k;j++){
            printf("%d",x[i][j]);
        }
        printf("|");
        printf("\n");
    }
    printf("\n\n");
    printf("Matriks B :\n");
    for(i=0;i<b;i++){
        printf("|");
        for(j=0;j<k;j++){
            printf("%d",x[i][j]);
        }
        printf("|");
        printf("\n");
    }

    return 0;
}
