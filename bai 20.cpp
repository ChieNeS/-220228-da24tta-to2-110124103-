#define SIZE 100
#include<stdio.h>
void nhapmang(int a[],int n);
void xuatmang(int a[],int n);
int tongmang(int a[],int n);
int trungbinhcongVTL(int a[],int n); 
int demsoduong(int a[],int n);
void sapxep(int a[],int n);
void giatrile(int a[],int n);
void inViTriZero(int A[], int n); 
int giatrilonnhat(int a[],int n);
int giatrilonnhatdautien(int a[],int n);
int giatrilonnhattrongmang(int a[],int n);
int kiemTraToanSoAm(int A[], int n);
int main()
{
	int A[SIZE];
	int n,kq,kq1,kq2,kq3,kq4,kq5,kq6;

	do
	{	printf("\nNhap vao so phan tu: ");
		scanf("%d", &n);
	}while(n<=0||n>100);
	
	
	//goi ham cau a
	nhapmang(A,n);
	
	//Goi ham cau b
	printf("\nMang vua nhap la: ");
	xuatmang(A,n);
	//Goi ham cau c
	kq = tongmang(A,n);
	printf("\nTong mang la: %d", kq);
	
	//Goi ham cau d
	kq1 = trungbinhcongVTL(A,n);
	printf("\nTrung binh cong la: %d", kq1);

	//Goi ham cau e
	kq2 = demsoduong(A,n);
	printf("\nSo duong la: %d", kq2);
 
 	//Goi ham cau f
 	 sapxep(A,n);
 	printf("\nSap xep theo thu tu tang dan: %d");

	//Goi ham cau g
	giatrile(A,n);
	printf("\nGia tri le la: %d"); 
  
	//Goi ham cau h
	inViTriZero(A,n);
  
  	//Goi ham cau i
  	kq3 = giatrilonnhat(A,n);
  	printf("\nGia tri lon nhat la: %d",kq3);
  
  	//Goi ham cau j
  	kq4 = giatrilonnhatdautien(A,n);
  	printf("\nGia tri lon nhat dau tien la %d", kq4);
  
 	//Goi ham cau k
	 kq5 =  giatrilonnhattrongmang(A,n);
  
	//Goi ham cau l
	kq6 = kiemTraToanSoAm(A,n);
 if (kiemTraToanSoAm(A, n)) {
        printf("\nMang co toan so am %d",kq6);
    } else {
        printf("\nMang khong co toan so am %d",kq6);
    }	
  return 0;	
}


void nhapmang(int a[], int n)
{
	int i;
	
	i = 0;
	while(i<=n-1)
	{
		printf("\nNhap gia tri tai vi tri %d: ", i);
		scanf("%d", &a[i]); 
		i++;
	}
}

void xuatmang(int a[],int n)
 {
 	int i;
 	for(i=0;i<=n-1;i++)
 {
 	printf("%8d",a[i]);
 }
}

int tongmang(int a[],int n)
{
	int tong=0;
	int i=0;
	do
	{
		tong=tong+a[i];
		i++;
		
	}
	while(i<=n-1);
	
	return tong;
}

int trungbinhcongVTL(int a[],int n)
{
	int tong=0;
	int dem=0;
	for(int i=1;i<n;i+=2)
	{
		tong+=a[i];
		dem++;
	}
	tong=tong/dem;
	return tong;
	}

int demsoduong(int a[],int n)
{	
	int dem =0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>0){
		dem ++;
		}
	}
	return dem;
	}
	
void sapxep(int a[],int n)
{
	for(int i=0;i<n-1;i++){
	for(int j=0;j<n-i-1;j++){
	if(a[j]>a[j+1]){
		int gan =a[j];
		a[j]=a[j+1];
		a[j+1]=gan;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
	printf("%d", a[i]);
	}
}

void giatrile(int a[],int n)
{
	for(int i=1;i<n;i+=2)
	{
		printf("%d",a[i]);
	}

}

void inViTriZero(int A[], int n) {
    int found = 0;  

    printf("\nCac vi tri co gia tri 0:");

    for (int i = 0; i < n; i++) {
        if (A[i] == 0) {
            printf("\nVi tri %d co gia tri 0\n", i);
            found = 1;  
        }
    }
    if (!found) {
        printf("\nKhong co gia tri 0 trong mang.\n");
    }
}

int giatrilonnhat(int a[],int n)
{
	int max=a[0];
	for(int i=1;i<n;i++){
		if(a[i]>max){
		max=a[i];
	}
		}
	return max;
}

int giatrilonnhatdautien(int a[],int n)
{
	int max=a[0];
	int vitri=0;
	for(int i=1;i<n;i++){
		if(a[i]>max){
		max=a[i];
		vitri =i;
		}		
	}
	return vitri;
}

int giatrilonnhattrongmang(int a[],int n)
{
int max=a[0];
	for(int i=1;i<n;i++){
		if(a[i]>max){
		max=a[i];
		}
	}	
	 printf("\nCac vi tri ca gia tri lon nhat trong mang la:", max);
    int found = 0;	
    for (int i = 0; i < n; i++) {
        if (a[i] == max) {
            printf("\nVi tri %d co gia tri lon nhat\n", i);
            found = 1;
             }
    }
	if (!found) {
        printf("\nKhong co gia tri lon nhat trong mang\n");
    }
	return 0;
}
int kiemTraToanSoAm(int A[], int n) {
    
    for (int i = 0; i < n; i++) {
        if (A[i] >= 0) {  
            return 0;  
        }
    }
    return 1;  

}

