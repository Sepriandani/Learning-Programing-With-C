#include<stdio.h>

int main(){
    char nama[100];

	FILE *in=fopen("seprian.txt","r");
	while(!feof(in)){
           fscanf(in,"%[^#]\n", &nama);fflush(stdin);
           // %[^#] artinya kita menyimpan bagian dari string dalam file sampai tanda #.
           // Kita tidak menggunnakan %s karena nama mengandung spasi
           printf("%s \n", nama);
        }
	fclose(in);
	getchar();
        return 0;
}
