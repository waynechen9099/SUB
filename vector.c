#include"vector.h"
#include<stdio.h>

int* vADD(int *A,int *B,int size)
{
    int *C = malloc(size*sizeof(int));

    int i=0;
    for(i=0;i<size;i++)
    {
        C[i] = A[i]+B[i];
    }
    return C;
}