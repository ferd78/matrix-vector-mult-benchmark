#include <stdio.h>
#include <stdlib.h>
#include "mylib/mylib.h"

int main()
{
    int MatSize = 1000;

    int* M = (int*) malloc(MatSize * MatSize * sizeof(int));
    int* V = (int*) malloc(MatSize * sizeof(int));
    int* MV = (int*) malloc(MatSize * sizeof(int));
    
    initMatRandInt(M, 0, 15, MatSize);
    initVecRandInt(V, 0, 15, MatSize);

    while(1)
    {
     matVecMult(M, V, MV, MatSize);
    }
   
   return 0;
}