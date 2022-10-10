//Praktikum EL2208 Praktikum pemecahan masalah dengan c
//Tugas Praktikum : 4
//Problem         : 4
//Tanggal         : 6 April 2019
//Nama (NIM)      : Seprian Dani (13117023)
//Nama File       : TugasPraktikum_problem04.c
//Deskripsi       : ASCII code

#include<stdio.h>
#include<math.h>

int main(){
    int bilangan,bilangan2,rata_rata,jumlah,perkalian,pembagian,pilih;

    printf("Pilih file :\n");
    printf("1.input1_a.txt dan input1_b.txt\n");
    printf("2. input2_a.txt dan input2_b.txt\n");
    printf("3. input3_a.txt dan input3_b.txt\n");
    printf("masukkan pilihan : ");
    scanf("%d",&pilih);

switch(pilih){
    case 1:{
        	FILE *in=fopen("input1_a.txt","r");
	while(!feof(in)){
           fscanf(in,"%d\n", &bilangan);fflush(stdin);
           printf("input 1 : %d",bilangan);
        }
	fclose(in);
	getchar();
	FILE *a=fopen("input1_b.txt","r");
	while(!feof(in)){
           fscanf(a,"%d\n", &bilangan2);fflush(stdin);
           printf("input 2: %d",bilangan2);
        }
	fclose(a);
	getchar();

	rata_rata=(bilangan+bilangan2)/2;
	printf("Rata-rata = %d\n",rata_rata);

	if(bilangan>bilangan2){
        printf("Nilai Maksimum = %d\n",bilangan);
        printf("Nilai Minimum = %d\n",bilangan2);
	}
	else if(bilangan<bilangan2){
        printf("Nilai Maksimum = %d\n",bilangan2);
        printf("Nilai Minimum = %d\n",bilangan);
	}
    else{
        printf("%d sama dengan %d\n",bilangan,bilangan2);
    }
    jumlah=bilangan+bilangan2;
    printf("Jumlah = %d\n",jumlah);

    perkalian=bilangan*bilangan2;
    printf("Hasil perkalian = %d\n",perkalian);

    pembagian=bilangan/bilangan2;
    printf("Hasil pembagian = %d\n",pembagian);

    break;
    }
    case 2:{
        	FILE *in=fopen("input2_a.txt","r");
	while(!feof(in)){
           fscanf(in,"%d\n", &bilangan);fflush(stdin);
           printf("input 1 : %d",bilangan);
        }
	fclose(in);
	getchar();
	FILE *a=fopen("input2_b.txt","r");
	while(!feof(in)){
           fscanf(a,"%d\n", &bilangan2);fflush(stdin);
           printf("input 2: %d",bilangan2);
        }
	fclose(a);
	getchar();

	rata_rata=(bilangan+bilangan2)/2;
	printf("Rata-rata = %d\n",rata_rata);

	if(bilangan>bilangan2){
        printf("Nilai Maksimum = %d\n",bilangan);
        printf("Nilai Minimum = %d\n",bilangan2);
	}
	else if(bilangan<bilangan2){
        printf("Nilai Maksimum = %d\n",bilangan2);
        printf("Nilai Minimum = %d\n",bilangan);
	}
    else{
        printf("%d sama dengan %d\n",bilangan,bilangan2);
    }
    jumlah=bilangan+bilangan2;
    printf("Jumlah = %d\n",jumlah);

    perkalian=bilangan*bilangan2;
    printf("Hasil perkalian = %d\n",perkalian);

    pembagian=bilangan/bilangan2;
    printf("Hasil pembagian = %d\n",pembagian);
    break;
    }
    case 3:{
        	FILE *in=fopen("input3_a.txt","r");
	while(!feof(in)){
           fscanf(in,"%d\n", &bilangan);fflush(stdin);
           printf("input 1 : %d",bilangan);
        }
	fclose(in);
	getchar();
	FILE *a=fopen("input3_b.txt","r");
	while(!feof(in)){
           fscanf(a,"%d\n", &bilangan2);fflush(stdin);
           printf("input 2: %d",bilangan2);
        }
	fclose(a);
	getchar();

	rata_rata=(bilangan+bilangan2)/2;
	printf("Rata-rata = %d\n",rata_rata);

	if(bilangan>bilangan2){
        printf("Nilai Maksimum = %d\n",bilangan);
        printf("Nilai Minimum = %d\n",bilangan2);
	}
	else if(bilangan<bilangan2){
        printf("Nilai Maksimum = %d\n",bilangan2);
        printf("Nilai Minimum = %d\n",bilangan);
	}
    else{
        printf("%d sama dengan %d\n",bilangan,bilangan2);
    }
    jumlah=bilangan+bilangan2;
    printf("Jumlah = %d\n",jumlah);

    perkalian=bilangan*bilangan2;
    printf("Hasil perkalian = %d\n",perkalian);

    pembagian=bilangan/bilangan2;
    printf("Hasil pembagian = %d\n",pembagian);

    break;
    }

}

    return 0;
}
