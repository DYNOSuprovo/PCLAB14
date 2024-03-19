#include <stdio.h>
float peri(float r,float *p)
	{
		float a;
		a=(float)3.1415*r*r;
		*p=(float)3.1415*2*r;
		return a;
	}
	void swap(int *,int *);
int main()
	{
		float r,a,p;
		scanf("%f",&r);
		a=peri(r,&p);
		printf("%f %f\n",a,p);
		return 0;
	}

