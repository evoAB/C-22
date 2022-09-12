#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p,size,largest=0;
    printf("Enter size of array : ");
    scanf("%d",&size);
    p=(int*)malloc(size*sizeof(int));

    for(int i=0;i<size;i++)
    {
        printf("Enter %d number : ",i+1);
        scanf("%d",p+i);
    }
    for(int i=0;i<size;i++)
        if(largest<*(p+i))
            largest=*(p+i);

    printf("Largest = %d",largest);
    free(p);
    return 0;
}
