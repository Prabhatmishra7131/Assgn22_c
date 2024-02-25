#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,i,size,sum=0;
    printf("Enter the size: ");
    scanf("%d",&size);
    ptr = (int*)(calloc(size,sizeof(int)));
    printf("Enter the values ");
    if(ptr==NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }
    for ( i = 0; i < size; i++)
    {
        scanf("%d",ptr+i);
    }
    for ( i = 0; i < size; i++)
    {
        sum+=(*(ptr+i));
    }
    printf("Average is- %d",sum/size);
    free(ptr);
    return 0;
    
}