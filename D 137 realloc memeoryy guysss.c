#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,*ptr,i;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    if(ptr==NULL)
        printf("No memory allocated!");
    else
    {
        printf("Memory allocated successfully\n");
        printf("Enter the elements : ");
        for(i=0;i<n;i++)
        {
            scanf("%d",&ptr[i]);
        }
    }



    int newsize,*temp;
      printf("Enter new size: ");
    scanf("%d",&newsize);

    temp=(int*)realloc(ptr,newsize*sizeof(int));

    if(temp == NULL)
        {
            printf("Reallocation failed!\n");
        }

     else
        {
            ptr=temp;
            if(newsize>n)
            {
                printf("Enter %d the elements: ",newsize-n);
                for(i=n;i<newsize;i++)
                {
                    scanf("%d",&ptr[i]);
                }
            }
            n=newsize;
        }

    printf("The updated array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",ptr[i]);
    }
    free(ptr);
}


