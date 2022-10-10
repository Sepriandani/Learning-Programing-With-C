//Praktikum EL2208 Pemecah Masalah dengan C
//Modul		: 8
//Percobaan	: 1
//Tanggal	: 20 Maret 2018
//Nama(NIM)	: Indah Dwi Rizki Amas (13116010)
//Nama file	: Problem1
//Deskripsi	: Luas Bidang Segi N

#include<stdio.h>
#include<math.h>

struct koordinat{
	float A, B;
};

int main(void){
	int titik,i;
	float luas,sum1,sum2;
	luas=0;
	sum1=0;
	sum2=0;
	input :

	printf("Masukan jumlah titik yang akan dimasukan : ");
	scanf ("%d",&titik);
	if (titik<3){
		printf("Jumlah Titik yang Dimasukkan tidak dapat Dibuat Bidang!!\n");
		goto input;
	}	
	
	struct koordinat cart[titik];
	for(i=0;i<titik;i++){
		cart[i].A;
		cart[i].B;	
	}
	
	for(i=0;i<titik;i++){
		printf("Masukkan Koordinat (X Y) titik ke-%d :",i+1);
		scanf("%f",&cart[i].A);
		scanf("%f",&cart[i].B);
	}
	cart[titik].A=cart[0].A;
	cart[titik].B=cart[0].B;
	
	for(i=0;i<=titik;i++){
		sum1=sum1+(cart[i].A*cart[i+1].B);
	}
	for(i=0;i<=titik;i++){
		sum2=sum2+(cart[i].B*cart[i+1].A);
	}
	luas=(sum1-sum2)/2;
	printf("\nHasil Area adalah %.2f",luas);
	return 0;
}
