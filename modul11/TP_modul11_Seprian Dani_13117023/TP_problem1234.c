//Praktikum EL2206 Pemecahan Masalah dengan C
//Tugas Praktikum   : 11
//Problem           : 1234
//Tanggal           : 29 April 2019
//Nama (NIM)        : Seprian Dani (13117023)
//Nama File         : TP_Problem1234.c
//Deskripsi         : Membuat operasi queue
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int elmt;
    struct node *next;
}node;

typedef struct queuetype
{
    struct node *qhead;
    struct node *qtail;
}queuetype;

void tail(int data,queuetype *queue);
void head(queuetype *queue);
void display();

int count = 0;
queuetype a;
node *temp;
node *depan;

void main(){
    int data, pilih;

    printf("----Pilihan Menu Queue----");
    printf("\n1) Tail");
    printf("\n2) Head");
    printf("\n3) Tampilkan Antrian");
    printf("\n4) Keluar\n");
    while (1){
        printf("Masukkan Pilihan : ");
        scanf("%d", &pilih);
        switch (pilih){
        case 1:
            printf("Masukkan Data : ");
            scanf("%d", &data);
            tail(data, &data);
            display();
            break;
        case 2:
            head(&data);
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Maaf pilihan anda tidak sesuai dengan menu, Silakan masukkan pilihan yang benar\n\n");
            break;
        }
    }
}

void tail(int data,queuetype *queue){
    if (a.qtail == NULL)
    {
        a.qtail = (struct node *)malloc(1*sizeof(struct node));
        a.qtail->next = NULL;
        a.qtail->elmt = data;
        a.qhead = a.qtail;
    }else{
        temp =(struct node *)malloc(1*sizeof(struct node));
        a.qtail->next = temp;
        temp->elmt = data;
        temp->next = NULL;

        a.qtail = temp;
    }
    count++;
}

void display(){
    depan = a.qhead;

    if ((depan == NULL) && (a.qtail == NULL))
    {
        printf("Tidak ada antrian\n\n ");
        return;
    }
    printf("Antrian saat ini: ");
    while (depan != a.qtail)    {
        printf("->%d ", depan->elmt);
        depan = depan->next;
    }
    if (depan == a.qtail)
        printf("->%d", depan->elmt);
        printf("\n\n");
}


void head(queuetype *queue){
    depan = a.qhead;

    if (depan == NULL)
    {
        printf("\nTidak ada antriaan saat ini\n\n");
        return;
    }else if (depan->next != NULL)
        {
            depan = depan->next;
            free(a.qhead);
            a.qhead = depan;
        }else{
            free(a.qhead);
            a.qhead = NULL;
            a.qtail = NULL;
        }
        display();
        count--;
}
