#include<stdio.h>
#include<malloc.h>

int main()
{
    int *a;

    a=(int*)malloc(100*sizeof(int));
    a[2]=5;
    printf("%d\n",a[2]);
    free(a);
    printf("%d\n",a[2]);

    return 0;
}
