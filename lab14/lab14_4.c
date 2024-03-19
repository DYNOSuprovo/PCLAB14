#include <stdio.h>
int main()
{
	int n=5;
	int *p;
	p=&n;
	printf("\nThe Value of num is %d:",n);
	n=10;
	printf("\n%d",n);
	*p=15;
	printf("\n%d\n",n);
}
