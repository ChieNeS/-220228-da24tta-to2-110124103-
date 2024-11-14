#include<stdio.h>
int main()
{
// khai bao bien
	int n,sum;
	printf("nhap n:");
	scanf("%d",&n);
// inh tong	
	while(n>0)
	{
		int cs=n%10;
		sum+=cs;
		n=n/10;
	}
	printf("Tong cac chu so nguyen la: %d",sum);
	return 0;
	
	
	
}
