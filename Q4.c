#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char *str,c;
    int i=0,j=1;
    str = (char*)(malloc(sizeof(char)));
    printf("Enter a text ");
    while (c!='\n')
    {
        c = getc(stdin);
        j++;
        str = (char*)(realloc(str,j*sizeof(char)));
        str[i] = c;
        i++;
    }
    str[i] = '\0';
    printf("The entered text- %s",str);
    free(str);
    return 0;
}