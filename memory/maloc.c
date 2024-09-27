#include<stdio.h>
#include<stdlib.h> // here maloc is presetn

int main()
{
    int n;
    printf("size\n");
    scanf("%d",&n);
    int *ptr = (int *)malloc(n * sizeof(int));
   
     for (int i = 0; i < 10; i++)
     {
        printf("enetr tje nu,ber \n");
        scanf("%d",&ptr[i]);
     }

     for (int i = 0; i <10; i++)
     {
         printf(" hello %d\n",ptr[i]);
     }
     
     free(ptr);
    return 0;
}
