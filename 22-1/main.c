#include <stdio.h>
#include <stdlib.h>

char* stringArray();
int main()
{
    int a;
    char *c;
    c=stringArray(a);
    printf("You Entered : %s",c);
    free(c);
    return 0;
}
char* stringArray()
{
    char *p,c;
    int j=1,i=0;
    p=(char*)malloc(sizeof(char));
    printf("Enter anything : ");
    while(c!='\n')
    {
        c=getc(stdin);
        j++;
        p=(char*)realloc(p,j*sizeof(char));
        p[i]=c;
        i++;
    }
    p[i]='\0';
    return p;
}
