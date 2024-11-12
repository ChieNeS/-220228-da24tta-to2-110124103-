#include<stdio.h>
int main()
{
	//khai bao bien
	int a,b,min;
  	//nhap gia tri
	  
	printf("nhap a: \n");
  	scanf("%d",&a);
  
  
  	printf("nhap b:\n");
  	scanf("%d",&b);
  	if(a<b)
  	min=a;
  	else
  	min=b;
  //xuat thong tin
  	printf("GTNN: %d",min);
  return 0;
	}
