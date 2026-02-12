#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,i,*ptr;
   printf("Enter the size of the array: ");
   scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));

   if(ptr==NULL)
    printf("No memory allocated");
   else
   {
       printf("Memory allocated succesfully\n");
       printf("Enter the elements: ");
       for(i=0;i<n;i++)
       {
           scanf("%d",&ptr[i]);
       }



     int choice,newsize;

     while(1)
     {
         printf("Enter 1 to increase the size.\n");
         printf("Enter 2 to decreaase the size.\n");
         printf("Enter 3 to keep the size same.\n");
         printf("Enter 4 to exit.\n");
         scanf("%d",&choice);


          switch(choice)
          {
          case 1:
            printf("Enter newsize: ");
            scanf("%d",&newsize);

            if(newsize<=n)
            {
                printf("Enter valid size");
                break;
            }
            else
            {
                int *temp;

                temp=(int*)realloc(ptr,newsize*sizeof(int));
                if(temp==NULL)
                    printf("No memory allocated");
                else
                    {
                        ptr=temp;
                        printf("Enter %d the elemets: ",newsize-n);
                        for(i=n;i<newsize;i++)
                        {
                            scanf("%d",&ptr[i]);
                        }
                        n=newsize;
                        printf("Size increased successfully\n");
                    }
                    break;

            }
          case 2:
                printf("Enter newsize: ");
                scanf("%d",&newsize);
                if(newsize>=n || newsize<=0)
                {
                    printf("Enter valid size.");
                    break;
                }
                else
                {
                    int *temp;
                    temp=(int*)realloc(ptr,newsize*sizeof(int));
                     if(temp== NULL)
                        {
                            printf("Reallocation failed!\n");
                        }
                    else
                        {
                            ptr=temp;
                            n=newsize;
                        }
                        break;
                }

          case 3:
            printf("Size remains same, %d",n);
            break;
          case 4:
            free(ptr);
            return 0;
          default:
            printf("Invalid choice");
            }
              for(i = 0; i < n; i++)
        {
            printf("%d ", ptr[i]);
        }

          }

    }


    printf("The updated array now is: ");
    for(i=0;i<n;i++)
    {
        printf("%d",ptr[i]);
    }
}


