#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)(malloc(sizeof(int)));
    *ptr = 10;
    printf("Before free- %d", *ptr);
    free(ptr);
    printf("\nAfter free- %d", *ptr);
    return 0;
}