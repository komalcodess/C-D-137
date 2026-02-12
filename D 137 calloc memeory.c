#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,*ptr;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));

    if(ptr=='\0')
        printf("No memory allocated!\n");
    else
    {
        printf("Memory allocated successfully\n");
        printf("Enter the elements: ");

        for(i=0;i<n;i++)
        {
            scanf("%d",&ptr[i]);
        }
    }

    printf("The elements are: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",ptr[i]);
    }
}
