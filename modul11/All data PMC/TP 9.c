//Praktikum EL2208 Pemecah Masalah dengan C
//Modul		: 9
//Percobaan	: 1
//Tanggal	: 21 Maret 2018
//Nama(NIM)	: Indah Dwi Rizki Amas (13116010)
//Nama file	: Problem1
//Deskripsi	: Implementasi Strukutur data Linked List 

#include<stdio.h>
#include<stdlib.h>
 
struct node{
    int input;
    struct node *lanjut;
}*head;
 
void append(int num){
    struct node *temp,*right;
    temp= (struct node *)malloc(sizeof(struct node));
    temp->input=num;
    right=(struct node *)head;
    while(right->lanjut != NULL){
    right=right->lanjut;
    right->lanjut =temp;
    right=temp;
    right->lanjut=NULL;}
}

void add( int num ){
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->input=num;
    if (head== NULL){
    head=temp;
    head->lanjut=NULL;
    }
    else{
    temp->lanjut=head;
    head=temp;
    }
}

void addafter(int num, int loc){
    int j;
    struct node *temp,*left,*right;
    right=head;
    
    for(j=1;j<loc;j++){
    left=right;
    right=right->lanjut;}
    temp=(struct node *)malloc(sizeof(struct node));
    temp->input=num;
    left->lanjut=temp;
    left=temp;
    left->lanjut=right;
    return;
}

void insert(int num){
    int i=0;
    struct node *temp;
    temp=head;
    
    if(temp==NULL){
    add(num);}
    else{
    while(temp!=NULL){
        if(temp->input<num)
        i++;
        temp=temp->lanjut;}
    if(i==0){
        add(num);}
    else if(i<count()){
        addafter(num,++i);}
    else{
        append(num);}
    }
}


int delete(int num){
    struct node *temp, *prev;
    temp=head;
    while(temp!=NULL){
    if(temp->input==num){
        if(temp==head){
        head=temp->lanjut;
        free(temp);
        return 1;}
        else{
        prev->lanjut=temp->lanjut;
        free(temp);
        return 1;}
    }
    else{
        prev=temp;
        temp= temp->lanjut;}
    }
    return 0;
}
 
 
void  display(struct node *r){
    r=head;
    if(r==NULL){
    return;}
    while(r!=NULL){
    printf("%d ",r->input);
    r=r->lanjut;}
    printf("\n");
}

int count(){
    struct node *a;
    int i=0;
    a=head;
    while(a!=NULL){
    a=a->lanjut;
    i++;}
    return i;
}
 
 
int  main(){
    int pilih,num;
    struct node *a;
    head=NULL;
    
    while(1){
    printf("List Operations\n");
    printf("===============\n");
    printf("1.Insert\n");
    printf("2.Display\n");
    printf("3.Size\n");
    printf("4.Delete\n");
    printf("5.Exit\n");
    printf("Enter your choice : ");
    if(scanf("%d",&pilih)<=0){
        printf("Masukkan bilangan hanya tipe integer\n");
        exit(0);
    } else {
        switch(pilih)
        {
         case 1:
		 	printf("Masukkan nilai : ");
            scanf("%d",&num);
            insert(num);
            break;
        case 2:
		    if(head==NULL){
                printf("List yang dibuat kosong\n\n");}
                else{
                printf("Element yang ada pada linked list yang dibuat : ");}
                display(pilih);
                break;
        case 3:     
			printf("Besaran linked list yang dibuat %??\n",count());
            break;
        case 4:
		    if(head==NULL)
                printf("List yang dibuat kosong\n");
                else{
                printf("Masukkan nilai yang ingin dihapus: ");
                scanf("%d",&num);
                if(delete(num))
                    printf("%d operasi penghapusan telah berhasil\n",num);
                else
                    printf("%d nilai tersebut tidak ditemukan\n\n",num);}
	                break;
        case 5:
		    return 0;
        	default:printf("Input Salah!\n");
        }
    }
    }
    return 0;
}
