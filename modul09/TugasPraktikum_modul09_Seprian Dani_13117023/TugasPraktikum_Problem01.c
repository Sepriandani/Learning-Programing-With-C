//Praktikum EL2206 Pemecahan Masalah dengan C
//Modul		: 9
//Percobaan	: 1
//Tanggal	: 22  April 2019
//Nama (NIM): Seprian dani (13117023)
//Nama File	: TugasPraktikum_Problem01
//Deskripsi	: Data Linked List yang mempunyai batas sesuai inputan user

#include <stdio.h>
#include <stdlib.h>
int a;
struct NODE {
   char nilai[10];
   struct NODE *next;
};

struct NODE *head = NULL;
struct NODE *current = NULL;

void printList(){
   struct NODE *ptr = head;
   printf("\n[head] =>");
   while(ptr != NULL) {
      printf(" %s =>",ptr->nilai);
      ptr = ptr->next;
   }
}

void insert(char nilai[a]){
   struct NODE *link = (struct NODE*) malloc(sizeof(struct NODE));
    int i;
    for(i=0;i<a;i++){
   link->nilai[i] = nilai[i];
   link->next = head;
   head = link;
    }
}
int main(){
    int a,i;
    char nilai[10];

    printf("1) Topi\n2) Kemeja\n3) Sarung Tangan\n4) Celana\n5) kaos kaki\n6) Exit");
     printf("Input Nilai elemen : ");
     scanf("%d",&a);
     if(a==1){
        nilai[a]='Topi';
        insert(nilai[a]);
     }
     else if(a==2){
        nilai[a]='Kemeja';
        insert(nilai[a]);
     }
          printList();
          exit(0);

}

