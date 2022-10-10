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
    char elmt;
    struct node*next;
}node;
typedef struct stacktype
{
   struct stacktype *top;
}stacktype;
struct node*top=NULL;
void push(char elmt,stacktype *stack);
void pop(stacktype *stack);
void printlist();

int main(void)
{
    char a;
    int i,pilih,*x;
    awal:
            printf("Operasi Stack :\n");
            printf("1. Tambahkan Barang\n");
            printf("2. Hapus Barang\n");
            printf("3. Tampilkan\n");
            printf("4. Exit\n");
            printf("Masukkan pilihan : ");
            scanf("%d",&pilih);

            switch(pilih){
                case 1:{
                    printf("1) Topi\n2) Kemeja\n3) Sarung Tangan\n4) Celana\n5) kaos kaki\n6) Exit");
                    printf("Masukan nomor pilihan barang: ");
                    scanf("%d",&i);
                    if(i==1){
                        a='Topi';
                        push(a,&x);
                    }
                    else if(i==2){
                        a='kemeja';
                        push(a,&x);
                    }
                    else if(i==3){
                        a='Sarung Tangan';
                        push(a,&x);
                    }
                    else if(i==4){
                        a='Celana';
                        push(a,&x);
                    }
                    else if(i==5){
                        a='Kaos kaki';
                        push(a,&x);
                    }
                    else{
                        printf("Masukkan pilihan yang benar\n");
                    }

                    printf("\n");
                    goto awal;
                }
                case 2:{
                    pop(&x);
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

void push(char elmt, stacktype *stack){
    struct node*temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->elmt= elmt;
    temp->next=top;
    top=temp;
}
void pop(stacktype *stack){
    struct node*temp;
    temp=top;
    top=top->next;
    temp->next=NULL;
    free(temp);
}

void printlist(){
    struct node*tail=top;
    printf("Isi Keranjang: ->");
    while(tail!=NULL){
        printf(" %s ->",tail->elmt);
        tail=tail->next;
    }
}
