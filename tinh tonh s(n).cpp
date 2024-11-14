#include<stdio.h>
int main()
{
	int n,i;
	long s;
	printf("nhap n :");
	scanf("%d",&n);
	s=0;
	i=1;
	for(int i=1; i<=n; i++)
	{	
		s=s+i;
	}	
	printf("tong la %d",s);
	
	return 0;
}
