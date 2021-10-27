#include <stdio.h>
#include <stdlib.h>

//calloc needs to arguments ...
//needs 2 arguments,
//syntax: void* calloc(size_t n, size_t size);
//where size_t n refers to no. of blocks
//where size_t size refers to size of each block

int main()
{
    int *ptr = (int *)calloc(10, sizeof(int));

    //an equivalent malloc call:
    int *ptr = (int *)malloc(10*sizeof(int));
    return 0;
}
