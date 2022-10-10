//Praktikum EL2208 Praktikum pemecahan masalah dengan c
//Tugas Praktikum : 3
//Problem         : 1
//Tanggal         : 1 April 2019
//Nama (NIM)      : Seprian Dani (13117023)
//Nama File       : TugasPraktikum_problem01.c
//Deskripsi       : ASCII code
#include<stdio.h>
#include<math.h>
#define PER_KWH 0.125

int main()
{
    int pilihan_I;
    double jumlah,s,p,t;
    char pilihan;

    printf("Masukkan Jumlah Pengunaan (kwh) : "); scanf("%lf",&jumlah);
    printf("Masukkan jenis pelanggan : R = Residential ; C = Comercial ; I = Industrial\n");
    printf("Masukkan pilihan : "); scanf("%s",&pilihan);
    printf("Penggunaan Listrik : \n\n");
    switch(pilihan)
    {
        case 'R':{
            s=(jumlah*PER_KWH)+7.00;
            p=(5.23/100)*s;
            t=p+s;
            printf("Kilowatt-Hours     : %.2f\n",jumlah);
            printf("Subtotal           : $%.2f\n",s);
            printf("Pajak              : $%.2f\n",p);
            printf("Total yang dibayar : $%.2f\n",t);
            break;
        }
        case 'C':{
            if(jumlah<1000){
                s=(jumlah*PER_KWH)+40.00;
                p=(5.23/100)*s;
                t=p+s;
                printf("Kilowatt-Hours     : %.2f\n",jumlah);
                printf("Subtotal           : $%.2f\n",s);
                printf("Pajak              : $%.2f\n",p);
                printf("Total yang dibayar : $%.2f\n",t);
            }
            else{
                s=(jumlah*0.10)+40.00;
                p=(5.23/100)*s;
                t=p+s;
                printf("Kilowatt-Hours     : %.2f\n",jumlah);
                printf("Subtotal           : $%.2f\n",s);
                printf("Pajak              : $%.2f\n",p);
                printf("Total yang dibayar : $%.2f\n",t);
            }
            break;
        }
        case 'I':{
            printf("1. Beban puncak (peak)\n");
            printf("2. Beban standar\n\n");
            printf("Masukkan pilihan : "); scanf("%d",&pilihan_I);
            switch(pilihan_I)
            {
                case 1:{
                    if(jumlah<=1000){
                    s=(jumlah*0.15)+100.00;
                    p=(5.23/100)*s;
                    t=p+s;
                    printf("Kilowatt-Hours     : %.2f\n",jumlah);
                    printf("Subtotal           : $%.2f\n",s);
                    printf("Pajak              : $%.2f\n",p);
                    printf("Total yang dibayar : $%.2f\n",t);
                    }
                    else{
                    s=(jumlah*PER_KWH)+100.00;
                    p=(5.23/100)*s;
                    t=p+s;
                    printf("Kilowatt-Hours     : %.2f\n",jumlah);
                    printf("Subtotal           : $%.2f\n",s);
                    printf("Pajak              : $%.2f\n",p);
                    printf("Total yang dibayar : $%.2f\n",t);
                    }
                    break;
                }
             case 2:{
                 if(jumlah<=1000){
                    s=(jumlah*0.10)+50.00;
                    p=(5.23/100)*s;
                    t=p+s;
                    printf("Kilowatt-Hours     : %.2f\n",jumlah);
                    printf("Subtotal           : $%.2f\n",s);
                    printf("Pajak              : $%.2f\n",p);
                    printf("Total yang dibayar : $%.2f\n",t);
                    }
                    else{
                    s=(jumlah*0.075)+50.00;
                    p=(5.23/100)*s;
                    t=p+s;
                    printf("Kilowatt-Hours     : %.2f\n",jumlah);
                    printf("Subtotal           : $%.2f\n",s);
                    printf("Pajak              : $%.2f\n",p);
                    printf("Total yang dibayar : $%.2f\n",t);
                    }
             }
             break;
            }

        }
    }

    return 0;
}
