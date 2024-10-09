#include <stdio.h>

int main()
{
       FILE* f1 = fopen("out.txt","w");
       char buff[1000];
       fgets(buff, sizeof(buff), stdin);

       fputs(buff, f1);


}