#include<stdio.h>

int main()
{
    int *pointerToVar;
    int normalVariable,normalVariable2;

    normalVariable=10;
    pointerToVar=&normalVariable;

    printf("Isi variabel biasa : %d\n",normalVariable);
    printf("Isi alamat variabel : %p\n",&normalVariable);
    printf("Isi variabel pointer : %d\n",*pointerToVar);
    printf("Isi alamat pointer : %p\n\n",pointerToVar);

    normalVariable=20;
    printf("Isi variabel biasa : %d\n",normalVariable);
    printf("Isi alamat variabel : %p\n",&normalVariable);
    printf("Isi variabel pointer : %d\n",*pointerToVar);
    printf("Isi alamat pointer : %p\n\n",pointerToVar);

    (*pointerToVar)=15;
    printf("Isi variabel biasa : %d\n",normalVariable);
    printf("Isi alamat variabel : %p\n",&normalVariable);
    printf("Isi variabel pointer : %d\n",*pointerToVar);
    printf("Isi alamat pointer : %p\n\n",pointerToVar);

    normalVariable2=100;
    pointerToVar=&normalVariable2;
    printf("Isi variabel biasa : %d\n",normalVariable);
    printf("Isi alamat variabel : %p\n",&normalVariable);
    printf("Isi variabel biasa 2 : %d\n",normalVariable2);
    printf("Isi alamat variabel 2 : %p\n",&normalVariable2);
    printf("Isi variabel pointer : %d\n",*pointerToVar);
    printf("Isi alamat pointer : %p\n\n",pointerToVar);

    return 0;
}
