//Praktikum EL2206 Pemecahan Masalah dengan C
//Tugas Praktikum   : 11
//Problem           : 1
//Tanggal           : 29 April 2019
//Nama (NIM)        : Seprian Dani (13117023)
//Nama File         : TugasPraktikum_Problem01.c
//Deskripsi         : Membuat operasi queue untuk menghitung lama antrian pada bank
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
    int waktu,jumlah;
    int i,pilih;

    printf("Masukkan jumlah nasabah pada baris pertama & lama transaksi pada baris kedua\njumlah lama transaksi yang diinput sama dengan jumlah nasabah\nCONTOH JUMLAH : 7\nCONTOH DURASI : 2 4 5 3 5 3 2\n");
    printf("============================================================================\n");
    printf("JUMLAH : ");scanf("%d",&jumlah);
    printf("DURASI : ");
    for(i=0;i<jumlah;i++){
        scanf("%d",&waktu);
        tail(waktu,&waktu);
    }
    display();
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

void display(){
    int x,y,z;
    x=0; y=0; z=0;

    depan = a.qhead;

    if ((depan == NULL) && (a.qtail == NULL))
    {
        printf("Tidak ada antrian\n\n ");
        return;
    }
    while (depan != a.qtail)    {
        if (x<=y && x<=z){
            x = x + depan->elmt;
        }
        else if(y<=x && y<=z){
            y = y + depan ->elmt;
        }
        else if(z<=x && z<=y){
            z = z + depan ->elmt;
        }
        depan = depan ->next;
    }
    if(depan = a.qtail){
        if (x<=y && x<=z){
            x=x + depan ->elmt;
        }
        else if(y<=x && y<=z){
            y = y + depan ->elmt;
        }
        else if(z<=x && z<=y){
            z = z + depan ->elmt;
        }
    }
    if(x>y && x>z){
        printf("Waktu yang diperlukan adalah %d menit\n",x);
        printf("-------------------------------------------");
    }
    else if(y>x && y>z){
        printf("Waktu yang diperlukan adalah %d menit\n",y);
        printf("-------------------------------------------");
    }
    else{
        printf("Waktu yang diperlukan adalah %d menit\n",z);
        printf("-------------------------------------------");
    }
}

