//Praktikum EL2208 Pemecah Masalah dengan C
//Modul		: 6
//Percobaan	: 1
//Tanggal	: 6 Maret 2018
//Nama(NIM)	: Indah Dwi Rizki Amas (13116010)
//Nama file	: Problem1
//Deskripsi	: Tabel dan Mahasiswa


#include <stdio.h>

struct data  {
	char NIM[50];
	char NAMA[50];
	char ASAL[50];
	char TTL[50];
	
};

int main (){
	int a;
	int i;
	int urut;
	char lanjut;
	struct data Data[a];
		
	scanf("%d", &a);
	scanf("%d", &urut);
	scanf("%s", &Data[urut].NIM);
	scanf("%s", &Data[urut].NAMA);
	scanf("%s", &Data[urut].ASAL);
	scanf("%s", &Data[urut].TTL);

	
	printf("No.\t NIM\t NAMA\t ASAL\t TTL\t\n");
		
	for(i=0;i<a;i++){
		printf("|\t|\t|\t|\t|\t|\n");
	}
	
	while(lanjut=='Y'){
		scanf("%d", &urut);
		scanf("%s", &Data[urut].NIM);
		scanf("%s", &Data[urut].NAMA);
		scanf("%s", &Data[urut].ASAL);
		scanf("%s", &Data[urut].TTL);
		scanf("%c", &lanjut);
	}
	
	for(i=0;i<a;i++){
		if(urut==i){
		printf("|%d\t|%s\t|%s\t|%s\t|%s\t|\n", i+1,Data[urut].NIM,Data[urut].NAMA,Data[urut].ASAL,Data[urut].TTL);
	}
	}
	
	return 0;
}
