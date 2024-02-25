#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char *str,c;
    int i=0,j=1;

    str = (char*)(malloc(sizeof(char)));
    printf("Enter the string: ");
    while(c!= '\n')
    {
        c = getc(stdin);
        j++;
        str = (char*)(realloc(str,j*sizeof(char)));
        str[i] = c;
        i++;
    }
    str[i] = '\0';
    printf("String is: %s",str);
    free(str);
    return 0;
}