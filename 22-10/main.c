#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p,size;
    printf("Enter size of array : ");
    scanf("%d",&size);
    p=(int*)malloc(size*sizeof(int));

    for(int i=0;i<size;i++)
    {
        printf("Enter %d number : ",i+1);
        scanf("%d",p+i);
    }
    for(int i=0;i<size-1;i++)
        for(int j=i+1;j<size;j++)
            if(*(p+i)>*(p+j))
            {
                int temp=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
            }
    printf("Maximum = %d",*(p+size-1));
    printf("\nMinimum = %d",*p);
    free(p);
    return 0;
}
