#include<stdio.h>
#define size 20
int main()
{
	int F[size];
	int a1=1,a2=1;
	F[0]=1;
	F[1]=1;
	for(int i=0;i<size;i++)
	{
		a1=a1+a2;
		F[2*i+2]=a1;
		a2=a1+a2;
		F[2*i+3]=a2;
	}
	for(int n=0;n<size;n++)
	{
		printf("F[%d]=%d\n",n,F[n]);
	}
}
//F[0]=1;F[1]=1;F[size]=F[size-1]+F[size-2];
//求F[size],size=20时，数组F[size]中的元素 
