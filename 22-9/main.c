#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p,size,sum=0;
    printf("Enter size of array : ");
    scanf("%d",&size);
    p=(int*)malloc(size*sizeof(int));

    if(p==NULL)
    {
        printf("Memory allocation Failed");
        return 0;
    }

    for(int i=0;i<size;i++)
    {
        printf("Enter %d number : ",i+1);
        scanf("%d",p+i);
    }
    printf("Entered numbers :");
    for(int i=0;i<size;i++)
        printf(" %d",*(p+i));
    free(p);
    return 0;
}
