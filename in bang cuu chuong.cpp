#include<stdio.h>
int main()
{
	int a,b;
	 for(a=2;a<=9;a++)	
	{
		for(b=2;b<=9;b++)
		{ 
			printf("%d*%d=%d\n",a,b,a*b);
		}
		printf("\n");
	}
return 0;
}
