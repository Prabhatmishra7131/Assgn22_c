#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, i, r, size, temp = 0;
    printf("Enter the size- ");
    scanf("%d", &size);
    ptr = (int *)(calloc(size, sizeof(int)));
    if (ptr == NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }
    printf("Enter elements- ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", ptr + i);
    }
    for (r = 1; r < size; r++)
    {
        for (i = 0; i < size - r; i++)
        {
            if (*(ptr + i) > *(ptr + i + 1))
            {
                temp = *(ptr + i);
                *(ptr + i) = *(ptr + i + 1);
                *(ptr + i + 1) = temp;
            }
        }
    }
    printf("The smallest value is- %d", ptr[0]);
    printf("\nThe largest value is- %d", ptr[size - 1]);
    free(ptr);
    return 0;
}