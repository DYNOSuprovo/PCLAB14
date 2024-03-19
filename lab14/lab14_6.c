#include <stdio.h>
	void swap(int *a, int *b)
	{
		int temp;
		temp =*a;
		*a=*b;
		*b=temp;
	}
	void swap(int *,int *);
	int main(
	{
		int x=5,y=10;
		printf("%d %d \n",x,y);
		swap(&x,&b);
		printf("%d %d\n"x,y);
		return 0;
	}

