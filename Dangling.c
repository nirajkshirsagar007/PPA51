#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p = NULL;

    p = (int *)malloc(5 * sizeof(int));

    free(p);

    //Now p is a Dangling pointer

    return 0;
}