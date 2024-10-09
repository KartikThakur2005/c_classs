#include<stdio.h>

int main()
{
     char buff[100];

     FILE *Fp = fopen("example.txt", "w");

     fgets(buff, sizeof(buff), stdin);
     fputs(buff, Fp);

    fclose(Fp);

}