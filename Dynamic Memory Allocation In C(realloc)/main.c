#include <stdio.h>
#include <stdlib.h>

//realloc() function is used to change the size of the memory block without losing the old data.

//syntax: void *realloc(void *ptr, size_t newSize)

int main()
{
    int i;
    int *ptr = (int *)malloc(sizeof(int));

    if(ptr == NULL){
        printf("Memory not available!");
        exit(1);
    }

    printf("Enter the two numbers: \n");
    for(i = 0; i<2; i++){
        scanf("%d", ptr+i);
    }

    //Reallocation of the memory for 2 more integers to a new block, without losing data in the old block!
    ptr = (int *)realloc(ptr, 4*sizeof(int));
    if(ptr == NULL){
        printf("Memory not available!");
        exit(1);
    }

    printf("Enter 2 more integers: \n");
    for(i = 2; i<4; i++){
        scanf("%d", ptr+i);
    }

    for(i = 0; i<4; i++){
        printf("%d ", *(ptr+i));
    }

    return 0;
}
