#include <stdio.h>
int main()
{
	int a,b,*x,*y,s;
	scanf("%d%d",&a,&b);
	x=&a;
	y=&b;
	s=*y+*x;
	printf("\nSum=%d",s);
}
