//Praktikum EL2206 Pemecahan Masalah dengan C
//Modul		: 9
//Percobaan	: 1
//Tanggal	: 22  April 2019
//Nama (NIM): Seprian dani (13117023)
//Nama File	: TP_Problem01
//Deskripsi	: Data Linked List

#include <stdio.h>
#include <stdlib.h>

struct NODE {
   int  a;
   struct NODE *next;
};

struct NODE *head = NULL;
struct NODE *current = NULL;

void printList(){
   struct NODE *ptr = head;
   printf("\n[head] =>");
   while(ptr != NULL) {
      printf(" %d =>",ptr->a);
      ptr = ptr->next;
   }
   printf(" [null]\n");
}

void insert(int a){
   struct NODE *link = (struct NODE*) malloc(sizeof(struct NODE));

   link->a = a;
   link->next = head;
   head = link;
}
int main(){
    char pilih;

 while(1) {
 printf("Input Nilai elemen : ");
 scanf("%d",&pilih);
 insert(pilih);
 printf("Apakah Anda Ingin Memasukkan Nilai Elemen Lagi (y/n)? :");
 scanf("%s", &pilih);

 if (pilih=='n')
    {
  printList();
  exit(0);
    } }
}
