#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, size;
    printf("Enter the size in bytes you want to reserve/occupy- ");
    scanf("%d", &size);
    ptr = (int *)(malloc(size));
    if (ptr == NULL)
    {
        printf("Memory allocation failed");
    }

    free(ptr);
    return 0;
}