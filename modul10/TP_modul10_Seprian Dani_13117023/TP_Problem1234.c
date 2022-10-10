//Praktikum EL2206 Pemecahan Masalah dengan C
//Tugas Praktikum   : 10
//Problem           : 1234
//Tanggal           : 26 April 2019
//Nama (NIM)        : Seprian Dani (13117023)
//Nama File         : TP_Problem1234.c
//Deskripsi         : Membuat operasi stuck
#include<stdio.h>

typedef struct node
{
    int elmt;
    struct node*next;
}node;

struct node *top =NULL;
void push(int x);
void pop();
void printlist();

int main(void)
{
    double a[100];
    int pilih,j,m,t,p;

    awal:
            printf("Operasi Stack :\n");
            printf("1. Memasukkan data\n");
            printf("2. Menghapus data\n");
            printf("3. menampilkan\n");
            printf("4. Selesai\n");
            printf("Masukkan pilihan : ");
            scanf("%d",&pilih);

            switch(pilih){
                case 1:{
                    printf("1. mobil\n2. motor\n");
                    printf("masukkan pilihan : ");scanf("%d",&p);
                    push(p);

                    printf("\n");
                    goto awal;
                }
                case 2:{
                    pop();
                    printf("\n");
                    goto awal;
                }
                case 3:{
                    printlist();
                    goto awal;
                }
                case 4:{
                    break;
                }

            }

    return 0;
}

void printlist(){
    struct node*tail=top;
    printf("Antrian =");
    while(tail!=NULL){
        printf(" %s ",tail->elmt);
        tail=tail->next;
    }
    printf("\n\n");
}
void push(int x){
    char plat[100],t;
    int j,m;
    if(x==1){
        printf("Masukkan plat mobil: ");scanf(" %[^\n]",&plat);
        printf("Masukkan Jam masuk: ");scanf("%d%s%d",&j,&t,&m);
        printf("Mobil dengan plat %s masuk pada jam %d:%d\n",plat,j,m);

    }
    struct node*temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->elmt= j;
    temp->next=top;
    top=temp;
}
void pop(){
    struct node*temp;
    temp=top;
    top=top->next;
    temp->next=NULL;
    free(temp);
}
