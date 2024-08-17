#include<stdio.h>

int main(){
	int a = 12900;
	int *b = &a;

	char *c = &a;
	//this will work because  it will take 1 first bit 
	printf("%d for int \n",*b);
	printf("%d for char \n",*c);


	// int arr[]={25, 50, 75, 100};

	// for(int i=0;i<=4;i++)
	// {
	// 	printf("%d ",arr[i]); 
	// }
	// printf("%d\n");



	// int *ptr=arr;
	// for(int i=0;i<=4;i++)
	// {
	// 	printf("%d ",*(arr+i));
	// }
	// printf("%d\n");



	return 0;

}
