#define SIZE 100
#include <stdio.h>
void nhapMang(int a[], int n);
void xuatMang(int a[], int n);
int tongMang(int a[], int n);
int tongduong(int a[],int n);
int tongvtle(int a[],int n);
int demsoam(int a[],int n);
int demsole(int a[],int n);
int inra(int a[],int n);
int timGTSoAm (int a[], int n);
int main()
{
	int A[SIZE];
	int n, kq,kq2,kq3,kq4,kq5,kq6,kq7;

	do
	{	printf("\nNhap vao so phan tu: ");
		scanf("%d", &n);
	}while(n<=0||n>100);
	
	
	//n hop le
	//goi ham cau a
	nhapMang(A,n);
	
	//Goi ham cau b
	printf("\nMang vua nhap la: ");
	xuatMang(A,n);
	
	//Goi ham cau c
	kq = tongMang(A,n);
	printf("\nTong cac gia trong mang la %d", kq);
	
	//hoi ham cau d
	kq2= tongduong(A,n);
	printf("\nTong cac gia tri duong trong mang la %d",kq2);
	
	//goi ham cau e
	kq3= tongvtle(A,n);
	printf("\nTong cac gia tri le trong mang la %d ",kq3);
	
	//hoi ham cau f
	kq4= demsoam(A,n);
	printf("\nSo phan tu am la %d",kq4);
	
	//goi ham cau g
	kq5= demsole(A,n);
	printf("\nSo phan tu le la %d",kq5);
	
	//goi ham cau h
	kq6=inra(A,n);
	
	//Goi ham cau...
	kq7=timGTSoAm(A,n) ;
	
	printf("\n so am trong mang la %d",kq7);
	return 0;
}
int tongMang(int a[], int n)
{
	int tong = 0;
	int i=0;
	do
	{
		tong = tong + a[i];
		i++;
	}while(i<=n-1);
	return tong;
}

void xuatMang(int a[], int n)
{
	int i;
	for(i=0; i<=n-1; i++)
	{
		printf("%8d", a[i]);
	}
}
void nhapMang(int a[], int n)
{
	int i;
	
	i = 0;
	while(i<=n-1)
	{
		printf("\nNhap gia tri tai vi tri %d: ", i);
		scanf("%d", &a[i]); //a+i
		i++;
	}
}
int tongduong(int a[],int n)
{
	int tongduong =0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>0){
			
		tongduong +=a[i];
		}	
	}
return tongduong;

}
int tongvtle(int a[],int n)
{	
	int tongvtle =0;
	for(int i=0;i<n;i+=2)
	{
		if(a[i]>0){
		tongvtle +=a[i];
		}
	}
return tongvtle;
}
int demsoam(int a[],int n)
{	
	int demsoam =0;
	for(int i=0;i<n;i++)
	{
		if(a[i]<0){
		demsoam ++;
		}
	}
	return demsoam;
	}

int demsole(int a[],int n)
{	
	int demsole =0;
	for(int i=0;i<n;i+=2)
	{
		if(a[i]%2!=0){
		demsole ++;
		}
	}
	return demsole;
	}
int inra(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]>0 & a[i]%2!=0)
		{
			printf("\nso duong le la %d",a[i]);
		}
		}
	return 0;
}
int timGTSoAm (int a[], int n)
{
	for (int i = 0; ; i++)
	{
		if( a[i] < 0)
		{
			return true;
			break;
		}
		else
			{
				return false;
				break;
		}
	}
}




























