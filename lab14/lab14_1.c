#include <stdio.h>
int main()
{
	int num;
	int *ptr;
	ptr=&num;
	num=20;
	printf("num");
	printf("\n%d",num);
	printf("\n%p",&num);
	printf("Var\n");
	printf("\n%d",*ptr);
	printf("\n%p\n",ptr);
}
