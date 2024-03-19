#include <stdio.h>
int main()
{
	int x=10,y=82;
	int *p;
	int z[10]={12,2,3,4,5,6,7,8,9,0};
	p=&x;
	y=*p;
	*p=0;
	p=&z[0];
	printf("\n%d ",z[0]);
	printf("\nx=%d ",x);
	printf("\ny=%d ",y);
}
