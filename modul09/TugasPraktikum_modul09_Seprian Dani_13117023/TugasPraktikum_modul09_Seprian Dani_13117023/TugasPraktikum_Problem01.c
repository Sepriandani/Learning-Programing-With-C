//Praktikum EL2206 Pemecahan Masalah dengan C
//Modul		: 9
//Percobaan	: 1
//Tanggal	: 22  April 2019
//Nama (NIM): Seprian dani (13117023)
//Nama File	: TugasPraktikum_Problem01
//Deskripsi	: Data Linked List yang mempunyai batas sesuai inputan user

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
    int a,i;
    int nilai;

     printf("Input Nilai elemen : ");
     scanf("%d",&a);
     for(i=1;i<=a;i++){
        printf("Masukkan Nilai elemen ke-%d : ",i);
        scanf("%d",&nilai);
        insert(nilai);
     }
          printList();
          exit(0);

}

