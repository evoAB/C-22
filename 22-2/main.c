#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p,n,sum=0;
    printf("How many values you want to enter : ");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    if(p==NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        printf("Enter %d value : ",i+1);
        scanf("%d",p+i);
    }
    for(int i=0;i<n;i++)
        sum+=*(p+i);
    printf("Average : %.2f",(float)sum/n);
    free(p);
    return 0;
}
