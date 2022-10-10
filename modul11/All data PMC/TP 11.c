//Praktikum EL2208 Pemecah Masalah dengan C
//Modul		: 11
//Percobaan	: 1
//Tanggal	: 27 Maret 2018
//Nama(NIM)	: Indah Dwi Rizki Amas (13116010)
//Nama file	: Problem1
//Deskripsi	: Implementasi Struktur Data queue (Antrian Pada Bank) 

#include <stdio.h>
#include <stdlib.h>

struct node{
    int next;
    struct node *ptr;
}*head,*tail,*temp,*head_1;

void enqueue(int element);
void dequeue();
void display();

int hitung = 0;

int main () 
{
 int pilih;
 int element;
 int i, nasabah, A, B, C;
   
   printf("Masukkan banyak nasabah : ");
   scanf("%d", &nasabah);
   
   for (i=0; i<nasabah; i++){
    scanf("%d", &element);
         enqueue(element);
   }
   
   display();
 }


// Memasuki antrian
void enqueue(int element)
{
    if (tail == NULL)
    {
        tail = (struct node *)malloc(1*sizeof(struct node));
        tail->ptr = NULL;
        tail->next = element;
        head = tail;
    }
 else
 {
        temp=(struct node *)malloc(1*sizeof(struct node));
        tail->ptr = temp;
        temp->next = element;
        temp->ptr = NULL;

        tail = temp;
    }
    hitung++;
}

// Menampilkan elemen antrian
void display(){
 int A, B, C;
 head_1 = head;
  A = 0;
     B = 0;
     C = 0;
 
    if ((head_1 == NULL) && (tail == NULL))
    {
        printf("Antrian kosong\n ");
        return;
    }
    printf("Element pada antrian : \n");
    while (head_1 != tail)    {
     
     
     
     
     if(A<=B && A<=C){
      A = A + head_1->next;
  }
  else if(B<= A && B<=C){
   B = B + head_1->next;
  }
  else if(C<=A && C<=B){
   C = C + head_1->next;
  }
  
        head_1 = head_1->ptr;
    }
    
      
    if (head_1 == tail){
     if(A<=B && A<=C){
      A = A + head_1->next;
  }
  else if(B<= A && B<=C){
   B = B + head_1->next;
  }
  else if(C<=A && C<=B){
   C = C + head_1->next;
  } 
 }   
        printf("A= %d\n", A);
        printf("B= %d\n", B);
        printf("C= %d\n", C);
        if(A>B && A>C){
         printf("%d", A);
  } else if(B>A && B>C){
         printf("%d", B);
  } else{
         printf("%d", C);
  }
}


void dequeue(){
    head_1 = head;

    if (head_1 == NULL)
    {
        printf("\nAntrian data kosong\n");
        return;
    }else if (head_1->ptr != NULL)
        {
            head_1 = head_1->ptr;
            printf("Antrian ingin Dihapus : %d\n", head->next);
            free(head);
            head = head_1;
        }else{
            printf("Antrian ingin Dihapus : %d\n", head->next);
            free(head);
            head = NULL;
            tail = NULL;
        }
        hitung--;
}
