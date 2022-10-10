//Praktikum EL2208 Pemecah Masalah dengan C
//Modul		: 7
//Percobaan	: 1
//Tanggal	: 8 Maret 2018
//Nama(NIM)	: Indah Dwi Rizki Amas (13116010)
//Nama file	: Problem1
//Deskripsi	: Program String


#include <stdio.h>
#include <string.h>

int main (){
	//Deklarasi Variabel
	char k1[100], k2[100], pilih, lanjut, u;
	int	sum1, sum2;
	
	//Algoritma
		do{
		printf("\n===Silahkan Pilih Menu===\n");
		printf("\n1. Membandingkan Panjang 2 Buah String");
		printf("\n2. Membalikan & Gabung kalimat");
		printf("\n3. Palindrom \n");
		printf("\nMasukkan Pilihan Anda	: "); 
		scanf("%d", &pilih);
		
				
	switch(pilih){
		case 1 :
		scanf("%c", &u);
		printf("\nMasukkan Kalimat pertama : ");
		gets(k1);
		sum1 = strlen(k1);
		printf("Panjang Kalimat adalah : %d \n", sum1);
	
		printf("\nMasukkan Kalimat kedua : ");
		gets(k2);
		sum2 = strlen(k2);
		printf("Panjang Kalimat adalah : %d \n", sum2);
		
		if(sum1>sum2){
			printf("\nKalimat Pertama Lebih Panjang dari Kalimat Kedua");
		}else{
			printf("\nKalimat Kedua Lebih Panjang dari Kalimat Pertama");
		}
	
        break;
        
		case 2 :
		printf("\nMasukkan kata pertama	: ");
		scanf("%s", k1);
		printf("Masukkan kata kedua	: ");
		scanf("%s", k2);
	
		strcat(k1,k2);
		printf("Hasil kata gabungan adalah : %s ", k1);
		strrev(k1);
		printf("\nHasil kalimat setelah dibalik adalah : %s ", k1);
	
        break;
        
        case 3 :
        scanf("%c", &u);
		printf("\nMasukkan Kalimat yang akan diuji : ");
		gets(k1);
		strcpy(k2, k1); 
   		strrev(k2);
   		
   		if(strcmp(k1, k2) == 0)
		printf("Kata %s adalah palindrom.\n", k1);
   		else
		printf("Kata %s bukan palindrom.\n", k1);
	
   printf("Kebalikan dari input diatas %s.\n", k2);
	}

		printf	("\n\nMau Coba Lagi(Y/N)??? ");
		scanf	("%s", &lanjut);
}	while((lanjut=='y')||(lanjut=='Y'));  
	return 0;
}


