#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,size,i,sum=0;
    printf("Enter number's size- ");
    scanf("%d",&size);
    ptr = (int*)(malloc(size*sizeof(int)));
    if (ptr == NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }
    printf("Enter the numbers- ");
    for ( i = 0; i < size; i++)
    {
        scanf("%d",ptr+i);
    }
    for ( i = 0; i < size; i++)
    {
        sum+=(*(ptr+i));
    }
    printf("Sum of %d elements along the inputted array is- %d",size,sum);
    free(ptr);
    return 0;
    
}