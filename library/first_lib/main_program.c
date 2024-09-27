#include <stdio.h>
#include "list.h"

int main()
{
    int *arr[10];

    push(arr,-1,11);

    printf("%d",arr[0]);
}