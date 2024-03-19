#include <stdio.h>
int main()
{
	int num;
	int *ptr;
	ptr=&num;
	num=10;
	printf("%d",num);
	printf("\n%p",&num);
}
