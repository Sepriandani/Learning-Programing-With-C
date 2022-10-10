//Praktikum EL2208 Pemecah Masalah dengan C
//Modul		: 10
//Percobaan	: 1
//Tanggal	: 22 Maret 2018
//Nama(NIM)	: Indah Dwi Rizki Amas (13116010)
//Nama file	: Problem1,2,3&4
//Deskripsi	: Implementasi Struktur Data Element Stack , Push and Top 

#include <stdio.h>
#include <conio.h>
#define max 10

typedef struct {
    int top;
    int data[max+1];
}stack;

stack tumpukan;
void createEmpty();
int IsEmpty();
int IsFull();
void push(int x);
void pop();

main(){
    int lagi, a, yatidak;
    int input;
    int pilih;
    createEmpty();
    pilih = 0;
    do {
        printf("             Mail Order Item\n");
        puts("-------------------------------------");
        puts("1: Beli Barang");
        puts("2: Keluarkan barang teratas");
        puts("3: Tampilkan Keranjang Belanja");
        puts("4: Keluar");
        puts("-------------------------------------");
        printf("\nMasukkan Pilihan Anda: ");
        scanf("%d",&pilih);
        switch(pilih){
        case 3:
            if (IsEmpty() == 1)
                puts("\nKeranjang kosong");
            else if ((IsEmpty() == 0) && (IsFull() == 0)){
            	puts("\nIsi keranjang Anda saat ini");
            	for(a=max;a>=1;a--)
					if(tumpukan.data[a] == 1){
						printf("%d. Topi\n",tumpukan.data[a]);
					} else if (tumpukan.data[a] == 2){
						printf("%d. Kemeja\n",tumpukan.data[a]);
					} else if (tumpukan.data[a] == 3){
						printf("%d. Sarung Tangan\n",tumpukan.data[a]);
					} else if (tumpukan.data[a] == 4){
						printf("%d. Celana\n",tumpukan.data[a]);
					} else if (tumpukan.data[a] == 5){
						printf("%d. Kaus Kaki\n",tumpukan.data[a]);
					}
			}
                
        break;
        case 1:
            if (IsFull() == 1)
                puts("\nKeranjang Penuh.");
            else
            {
                printf("\nDaftar Barang:\n");
				printf("1. Topi");
				printf("2. Kemeja");
				printf("3. Sarung Tangan");
				printf("4. Celana");
				printf("5. Kaus Kaki");
				printf("\nMasukkan nomor(angka) barang yang ingin Anda beli: ");
                scanf("%d",&input);
                push(input);
            }
        break;
        case 2:
            printf("\nNomor(angka) barang yang dikeluarkan adalah %d \n",tumpukan.data[tumpukan.top]);
            pop();
        break;
        case 5:
        	return;
        break;
        }
        printf("\nApakah Anda ingin melanjutkan? (1 = ya, 0 = tidak)\n");
        scanf("%d", &yatidak);
        
    } while (yatidak == 1);
}

void createEmpty(){
    tumpukan.top = 0;
}

void push(int x){
    tumpukan.top = tumpukan.top + 1;
    tumpukan.data[tumpukan.top] = x;
}

void pop(){
    tumpukan.top = tumpukan.top - 1;
}

int IsEmpty(){
    if (tumpukan.top == 0)
        return 1;
    else
        return 0;
}

int IsFull(){
    if (tumpukan.top == max)
        return 1;
    else
        return 0;
}

